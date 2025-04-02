#!/usr/bin/env python3
import rclpy
import rclpy.subscription
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from standardbots import StandardBotsRobot
from geometry_msgs.msg import Pose
from std_msgs.msg import Bool
from std_msgs.msg import Float32MultiArray

class MyStandardBotStatusNode(Node):
    def __init__(self):
        super().__init__("standard_bot_status")
        
        self.declare_parameter("robot_url", "default_value")
        self.declare_parameter("robot_token", "default_value")
        self.declare_parameter("robot_name", "default_value")
        
        # Simon:
        self.sdk = StandardBotsRobot(
            url=self.get_parameter("robot_url").value,
            token=self.get_parameter("robot_token").value,
            robot_kind=StandardBotsRobot.RobotKind.Live
            )
        
        self.robot_name = self.get_parameter("robot_name").value
        self.cart_pose_publisher = self.create_publisher(Pose, f"/{self.robot_name}/cart_position", 10)
        self.joint_rotations_publisher = self.create_publisher(Float32MultiArray, f"/{self.robot_name}/joint_rotations", 10)
        self.is_moving_publisher = self.create_publisher(Bool, f"/{self.robot_name}/is_moving", 10)
        timer_period = 0.1
        self.cb_group = ReentrantCallbackGroup()
        self.timer = self.create_timer(timer_period, self.publish_status, self.cb_group)
        self.current_position = Pose()
        self.is_moving = False

    def positions_equal(self, current_position, new_position):
        self.get_logger().info(f"CURRENT = {current_position.position.x}, NEW = {new_position.position.x}")
        self.get_logger().info(f"CURRENT = {current_position.position.y}, NEW = {new_position.position.y}")
        self.get_logger().info(f"CURRENT = {current_position.position.z}, NEW = {new_position.position.z}")

        if current_position.position.x != new_position.position.x:
            return False
        if current_position.position.y != new_position.position.y:
            return False
        if current_position.position.z != new_position.position.z:
            return False

        self.get_logger().info(f"POSITIONS ARE EQUAL!\n")
        return True
     
    def publish_status(self):
        message = Pose()
        self.get_logger().info("Publishing robot status!")
        with self.sdk.connection():
            self.sdk.movement.brakes.unbrake().ok()
            response = self.sdk.movement.position.get_arm_position()

            try:
                data = response.ok()
                j_1, j_2, j_3, j_4, j_5, j_6 = data.joint_rotations
                self.get_logger().info(f"Position Information {[j_1, j_2, j_3, j_4, j_5, j_6]}!")
                
                position = data.tooltip_position.position
                orientation = data.tooltip_position.orientation

                #---------------------------------------------------
                # Publish the current cart position for the robot
                #---------------------------------------------------
                message.position.x = position.x
                message.position.y = position.y
                message.position.z = position.z

                # Set the orientation (using a quaternion)
                message.orientation.x = orientation.quaternion.x
                message.orientation.y = orientation.quaternion.y
                message.orientation.z = orientation.quaternion.z
                message.orientation.w = orientation.quaternion.w

                # Get robot coordinates and set them on the message
                self.get_logger().info(f"Sending position coordinates: {message}")
                self.cart_pose_publisher.publish(message) 

                #---------------------------------------------------
                # Publish the current joint position for the robot
                #---------------------------------------------------
                msg = Float32MultiArray()
                msg.data = [j_1, j_2, j_3, j_4, j_5, j_6]
               
                self.get_logger().info(f"publishing message with joint rotations: {msg}")
                self.joint_rotations_publisher.publish(msg)

                #------------------------------------------------------------
                # Publish whether the robot is moving (position has changed)
                #------------------------------------------------------------
                is_currently_moving = False

                if self.positions_equal(self.current_position, message) == False:
                    is_currently_moving = True
                self.current_position = data.tooltip_position
                
                self.get_logger().info(f"Current moving state: {is_currently_moving}, Previous Moving State: {self.is_moving}\n")

                if self.is_moving != is_currently_moving:
                    is_moving_msg = Bool()
                    is_moving_msg.data = is_currently_moving
                    self.is_moving_publisher.publish(is_moving_msg)
                    self.is_moving = is_currently_moving
                
            except Exception:
                self.get_logger().debug(f"Received an error connecting to the robot: {data}")

def main():
    rclpy.init()

    # Create the status node
    standard_bot_status = MyStandardBotStatusNode()

    # Spin up the node
    rclpy.spin(standard_bot_status)

    # Shut down the node
    standard_bot_status.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

