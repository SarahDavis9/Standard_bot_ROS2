#!/usr/bin/env python3

# ROS packages
import rclpy
from rclpy.node import Node
from rclpy.action.client import ActionClient

from time import sleep

# Fanuc packages
from action_interfaces.action import OnRobotGripper

class OnRobotGripperActions(Node):
    def __init__(self):
        super().__init__("onrobot_gripper_client")
		
        self.declare_parameter("robot_name", "default_value")
        self.robot_name = self.get_parameter("robot_name").value

		# Actions
        self.on_robot_gripper_client = ActionClient(self, OnRobotGripper, f"/{self.robot_name}/onrobot_gripper")
        self.run_test()
		
    def run_test(self):

        # OnRobot Gripper
        print("Running Gripper test")
        self.on_robot_gripper_client.wait_for_server()

        # CLOSE Gripper Test - Add width and force
        gripper_goal_1 = OnRobotGripper.Goal()
        gripper_goal_1.width = 0.069
        gripper_goal_1.force = 10.0

        future = self.on_robot_gripper_client.send_goal_async(gripper_goal_1, feedback_callback=self.feedback_callback)
        future.add_done_callback(self.goal_response_callback)
        sleep(2) 

        # OPEN Gripper - Add width and force
        gripper_goal_2 = OnRobotGripper.Goal()
        gripper_goal_2.width = 0.11
        gripper_goal_2.force = 10.0

        future = self.on_robot_gripper_client.send_goal_async(gripper_goal_2, feedback_callback=self.feedback_callback)
        sleep(2) 


#------- Helper functions -------------
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
    jon_robot_gripper_action_client = OnRobotGripperActions()

    # Spin up the node
    rclpy.spin(jon_robot_gripper_action_client)

    # Shut down the node
    jon_robot_gripper_action_client.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()