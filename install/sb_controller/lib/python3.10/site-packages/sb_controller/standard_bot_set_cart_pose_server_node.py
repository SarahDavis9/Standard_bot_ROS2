import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from sb_controller.actions import SetCartPose
from standardbots import StandardBotsRobot, models



class MyStandardBotSetCartPoseActionServer(Node):
    def __init__(self):
        super().__init__('cart_pose_server')

        self.goal = SetCartPose.Goal()

        self._action_server = ActionServer(self, SetCartPose, "/standardbot1/set_cart_position", 
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
            feedback_msg = SetCartPose.Feedback()
            with self.sdk.connection():
                self.sdk.movement.brakes.unbrake().ok()
                response = self.sdk.movement.position.get_arm_position()

                try:
                    data = response.ok()
                    j_1, j_2, j_3, j_4, j_5, j_6 = data.joint_rotations
                    self.get_logger().info(f"Position Information {[j_1, j_2, j_3, j_4, j_5, j_6]}!")   
                except Exception:
                    self.get_logger().debug(f"Received an error connecting to the robot: {data}")                             
                
                distance = [data.tooltip_position.position.x,
                            data.tooltip_position.position.y,
                            data.tooltip_position.position.z,
                            data.tooltip_position.orientation.quaternion.x,
                            data.tooltip_position.orientation.quaternion.y,
                            data.tooltip_position.orientation.quaternion.z,
                            data.tooltip_position.orientation.quaternion.w,
                            ]
                feedback_msg.distance_left = distance

                self.sdk.movement.position.move(
                    position=models.Position(
                        unit_kind=models.LinearUnitKind.Meters,
                        x=self.goal.x,
                        y=self.goal.y,
                        z=self.goal.z,
                    ),
                    orientation=models.Orientation(
                        kind=models.OrientationKindEnum.Quaternion,
                        quaternion=models.Quaternion(self.goal.q_x, self.goal.q_y, self.goal.q_z, self.goal.q_w),
                    ),    
                )        

                while self.bot.is_moving():
                    # Calculate distance left
                    feedback_msg.distance_left[0] -= self.goal.x
                    feedback_msg.distance_left[1] -= self.goal.y
                    feedback_msg.distance_left[2] -= self.goal.z
                    feedback_msg.distance_left[3] -= self.goal.q_x
                    feedback_msg.distance_left[4] -= self.goal.q_y
                    feedback_msg.distance_left[5] -= self.goal.q_z
                    feedback_msg.distance_left[6] -= self.goal.q_w
                    goal_handle.publish_feedback(feedback_msg) # Send value

                    response = self.sdk.movement.position.get_arm_position()
                    data = response.ok()

                    distance = [data.tooltip_position.position.x,
                            data.tooltip_position.position.y,
                            data.tooltip_position.position.z,
                            data.tooltip_position.orientation.quaternion.x,
                            data.tooltip_position.orientation.quaternion.y,
                            data.tooltip_position.orientation.quaternion.z,
                            data.tooltip_position.orientation.quaternion.w,
                            ]
                    feedback_msg.distance_left = distance
                                
            goal_handle.succeed()
            result = SetCartPose.Result()
            result.success = True
        except:
            goal_handle.canceled()
            result = SetCartPose.Result()
            result.success = False
        self.goal = SetCartPose.Goal() #Reset
        return result

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()


def main(args=None):
    rclpy.init()

    cart_pose_action_server = MyStandardBotSetCartPoseActionServer()

    rclpy.spin(cart_pose_action_server)

    cart_pose_action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()