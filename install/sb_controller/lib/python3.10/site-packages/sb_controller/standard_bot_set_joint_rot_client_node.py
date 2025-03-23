# ROS packages
import rclpy
from rclpy.node import Node
from rclpy.action.client import ActionClient

# Action Interfaces
import action_interfaces
from action_interfaces.action import SetJointPos

from time import sleep

class JointRotationActions(Node):
    def __init__(self):
        super().__init__("joint_rot_client")
		
		# Actions
        self.joints_ac = ActionClient(self, SetJointPos, "/standardbot1/set_joint_rotations")
        self.run_test()
		
    def run_test(self):

        # Joints
        print("Running Joint test")
        self.joints_ac.wait_for_server()
        joint_goal = SetJointPos.Goal()
        # Add all joints
        joint_goal.joint1 = -2.05779767
        joint_goal.joint2 = 0.2882086
        joint_goal.joint3 = -1.70167899
        joint_goal.joint4 = 1.59856677
        joint_goal.joint5 = 1.9663566
        joint_goal.joint6 = 0.5
        future = self.joints_ac.send_goal_async(joint_goal, feedback_callback=self.feedback_callback)
        future.add_done_callback(self.goal_response_callback)
        sleep(3) 


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

    joint_rot_action_client = JointRotationActions()

    rclpy.spin(joint_rot_action_client)

    joint_rot_action_client.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()