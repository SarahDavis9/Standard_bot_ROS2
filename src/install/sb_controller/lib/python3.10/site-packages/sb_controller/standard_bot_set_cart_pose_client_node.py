#!/usr/bin/env python3

# ROS packages
import rclpy
from rclpy.node import Node
from rclpy.action.client import ActionClient

# Action imports
from action_interfaces.action import SetCartPos

from time import sleep

class CartPositionActionClient(Node):
    def __init__(self):
        super().__init__("cart_pose_client")
		
        self.declare_parameter("robot_name", "default_value")
        self.robot_name = self.get_parameter("robot_name").value

		# Actions
        self.cart_ac = ActionClient(self, SetCartPos, f"/{self.robot_name}/set_cart_position")
        self.run_test()
		
    def run_test(self):
        
		# Cartesian Action Server Test
        print("Set Cartesian Position")

        # Wait till its ready
        self.cart_ac.wait_for_server() 
        
        # Create goal
        cart_goal = SetCartPos.Goal() 

        # Add all coordinates 
        cart_goal.x = 0.3451
        cart_goal.y = 0.3759
        cart_goal.z = 1.0
        cart_goal.q_x = 0.0581
        cart_goal.q_y = -0.06366
        cart_goal.q_z = 0.67397
        cart_goal.q_w = 0.7337
        future = self.cart_ac.send_goal_async(cart_goal, feedback_callback=self.feedback_callback)
        future.add_done_callback(self.goal_response_callback)
        sleep(3) 

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.success))

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.distance_left))


def main(args=None):
    rclpy.init()

    # Create the action client
    cart_pose_action_client = CartPositionActionClient()

    # Spin up the node
    rclpy.spin(cart_pose_action_client)

    # Shut node down
    cart_pose_action_client.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()