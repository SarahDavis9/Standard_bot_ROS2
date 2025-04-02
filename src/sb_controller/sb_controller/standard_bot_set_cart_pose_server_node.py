#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from standardbots import StandardBotsRobot, models
from std_msgs.msg import Bool
from action_interfaces.action import SetCartPos

class StandardBotSetCartPoseActionServer(Node):
    def __init__(self):
        super().__init__('cart_pose_server')

        self.declare_parameter("robot_url", "default_value")
        self.declare_parameter("robot_token", "default_value")
        self.declare_parameter("robot_name", "default_value")

        self.sdk = StandardBotsRobot(
            url=self.get_parameter("robot_url").value,
            token=self.get_parameter("robot_token").value,
            robot_kind=StandardBotsRobot.RobotKind.Live
            )

        self.goal = SetCartPos.Goal()

        self.robot_name = self.get_parameter("robot_name").value
        
        self._action_server = ActionServer(self, SetCartPos, f"/{self.robot_name}/set_cart_position", 
                                        execute_callback = self.execute_callback, 
                                        goal_callback = self.goal_callback,
                                        cancel_callback = self.cancel_callback)

        self.subscription = self.create_subscription(
            Bool,
            f"/{self.robot_name}/is_moving", 
            self.listener_callback, 
            10)
        
        self.is_moving = False
        self.subscription # prevent unused variable warning

    def listener_callback(self, data):
        self.get_logger().info('Robot motion status changed')
        self.is_moving = data.data


    def goal_callback(self, goal_request):
        """ Accepts or Rejects client request to begin Action """
        self.goal = goal_request 

        # TODO: Determine the min/max cartesian position and orientation values

        # min_x = 0
        # max_x = 0
        # min_y = 0
        # max_y = 0
        # min_z = 0
        # max_z = 0
        # min_q_x = 0
        # max_q_x = 0
        # min_q_y = 0
        # max_q_y = 0
        # min_q_z = 0
        # max_q_z = 0
        # min_q_w = 0
        # max_q_w = 0

        # # For Cartesian, we need to check the quaternion. 
        # if self.goal.x > max_x or self.goal.x < -min_x:
        #     self.get_logger().info(f'X should be between [?,?] meters, got: {self.goal.x}')
        #     return GoalResponse.REJECT
        # elif self.goal.y > max_y or self.goal.y < min_y:
        #     self.get_logger().info(f'Y should be between [?,?] meters, got: {self.goal.y}')
        #     return GoalResponse.REJECT
        # elif self.goal.z > max_z or self.goal.z < min_z:
        #     self.get_logger().info(f'Z should be between [?,?] meters, got: {self.goal.z}')
        #     return GoalResponse.REJECT
        # elif self.goal.q_x > max_q_x or self.goal.q_x < min_q_x:
        #     self.get_logger().info(f'Q_X should be between [?,?] meters, got: {self.goal.q_x}')
        #     return GoalResponse.REJECT
        # elif self.goal.q_y > max_q_y or self.goal.q_y < min_q_y:
        #     self.get_logger().info(f'Q_Y should be between [?,?] meters, got: {self.goal.q_y}')
        #     return GoalResponse.REJECT
        # elif self.goal.q_z > max_q_z or self.goal.q_z < min_q_z:
        #     self.get_logger().info(f'Q_Z should be between [?,?] meters, got: {self.goal.q_z}')
        #     return GoalResponse.REJECT
        # elif self.goal.q_w > max_q_w or self.goal.q_w < min_q_w:
        #     self.get_logger().info(f'Q_W should be between [?,?] meters, got: {self.goal.q_w}')
        #     return GoalResponse.REJECT        
        
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
            feedback_msg = SetCartPos.Feedback()
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
            result = SetCartPos.Result()
            result.success = True
        except:
            goal_handle.canceled()
            result = SetCartPos.Result()
            result.success = False
        self.goal = SetCartPos.Goal() #Reset
        return result

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()


def main(args=None):
    rclpy.init()

    # Create action server
    cart_pose_action_server = StandardBotSetCartPoseActionServer()

    # Spin up the node
    rclpy.spin(cart_pose_action_server)

    # Shut down the node
    cart_pose_action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()