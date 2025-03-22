import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from sb_controller.actions import SetJointRot
from standardbots import StandardBotsRobot, models

# sdk = StandardBotsRobot(
#     url='http://129.101.98.221:3000',
#     token='15uh3g-c7kio-5rc498-hj6rj',
#     robot_kind=StandardBotsRobot.RobotKind.Live
#     )


class MyStandardBotSetJointRotActionServer(Node):
    def __init__(self):
        super().__init__('joint_pose_server')

        self.goal = SetJointRot.Goal()

        self._action_server = ActionServer(self, SetJointRot, "/standardbot1/set_joint_position", 
                                        execute_callback = self.execute_callback, 
                                        goal_callback = self.goal_callback,
                                        cancel_callback = self.cancel_callback)

        self.subscription = self.create_subscription(
            '/standardbot1/is_moving', 
            self.listener_callback, 
            10)
        
        self.is_moving = False
        self.subscription # prevent unused variable warning

        self.declare_parameter("robot_url", "default_value")
        self.declare_parameter("robot_token", "default_value")

        # Simon:
        self.sdk = StandardBotsRobot(
            url=self.get_parameter("robot_url").value,
            token=self.get_parameter("robot_token").value,
            robot_kind=StandardBotsRobot.RobotKind.Live
            )

    def listener_callback(self, data):
        self.get_logger().info('Robot motion status changed')
        self.is_moving = data.data


    def goal_callback(self, goal_request):
        """ Accepts or Rejects client request to begin Action """
        self.goal = goal_request 
        
        # For Joint, rotations, check for for +- 360degrees for each joint
        # For Cartesian, we need to check the quaternion. 

        # If here, all values are acceptable
        self.get_logger().info('Cart goal recieved: '+ str(self.goal))
        return GoalResponse.ACCEPT
                
    def cancel_callback(self, goal_handle):
        """Accept or reject a client request to cancel an action."""
        if self.goal == None:
            self.get_logger().info('No goal to cancel...')
            return CancelResponse.REJECT
        else:
            self.get_logger().info('Received cancel request')
            goal_handle.canceled()
            return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        try:
            # Create base for feedback
            feedback_msg = SetJointRot.Feedback()
            with self.sdk.connection():
                self.sdk.movement.brakes.unbrake().ok()
                response = self.sdk.movement.position.get_arm_position()

                try:
                    data = response.ok()
                    j_1, j_2, j_3, j_4, j_5, j_6 = data.joint_rotations
                    self.get_logger().info(f"Position Information {[j_1, j_2, j_3, j_4, j_5, j_6]}!")   
                except Exception:
                    self.get_logger().debug(f"Received an error connecting to the robot: {data}")                             
                
                distance = [j_1, j_2, j_3, j_4, j_5, j_6]
                feedback_msg.distance_left = distance
  
                arm_rotations = models.ArmJointRotations( joints=(j_1, j_2, j_3, j_4, j_5, j_6)) # 6-tuple of float values ) 
                position_request = models.ArmPositionUpdateRequest( kind=models.ArmPositionUpdateRequestKindEnum.JointRotation, joint_rotation=arm_rotations) 
                self.sdk.movement.position.set_arm_position(position_request).ok()

                while self.bot.is_moving():
                    # Calculate distance left
                    feedback_msg.distance_left[0] -= self.goal.j_1
                    feedback_msg.distance_left[1] -= self.goal.j_2
                    feedback_msg.distance_left[2] -= self.goal.j_3
                    feedback_msg.distance_left[3] -= self.goal.j_4
                    feedback_msg.distance_left[4] -= self.goal.j_5
                    feedback_msg.distance_left[5] -= self.goal.j_6

                    goal_handle.publish_feedback(feedback_msg) # Send value

                    response = self.sdk.movement.position.get_arm_position()
                    data = response.ok()
                    j_1, j_2, j_3, j_4, j_5, j_6 = data.joint_rotations

                    distance = [j_1, j_2, j_3, j_4, j_5, j_6]
                    feedback_msg.distance_left = distance
                                
            goal_handle.succeed()
            result = SetJointRot.Result()
            result.success = True
        except:
            goal_handle.canceled()
            result = SetJointRot.Result()
            result.success = False

        self.goal = SetJointRot.Goal() #Reset
        return result

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()


def main(args=None):
    rclpy.init()

    joint_rot_action_server = MyStandardBotSetJointRotActionServer()

    rclpy.spin(joint_rot_action_server)

    joint_rot_action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()