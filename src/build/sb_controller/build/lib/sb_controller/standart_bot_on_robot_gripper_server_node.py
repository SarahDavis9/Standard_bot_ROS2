#!/usr/bin/env python3

# ROS packages
import rclpy
import sys
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from standardbots import StandardBotsRobot, models
from action_interfaces.action import OnRobotGripper

sys.path.append('./pycomm3/pycomm3')


class StandardBotOnRobotActionServer(Node):
    def __init__(self):
        super().__init__('onrobot_gripper_server')

        self.goal = OnRobotGripper.Goal()

        self.declare_parameter("robot_url", "default_value")
        self.declare_parameter("robot_token", "default_value")

        self.sdk = StandardBotsRobot(
            url=self.get_parameter("robot_url").value,
            token=self.get_parameter("robot_token").value,
            robot_kind=StandardBotsRobot.RobotKind.Live
            )


        self._action_server = ActionServer(self, OnRobotGripper, "standardbot1/onrobot_gripper", 
                                        execute_callback = self.execute_callback, 
                                        goal_callback = self.goal_callback,
                                        cancel_callback = self.cancel_callback)

    def goal_callback(self, goal_request):
        """ Accepts or Rejects client request to begin Action """
        self.goal = goal_request 
        
        # Check that it recieved a valid goal
        if self.goal.width > 0.1176 or self.goal.width < 0.0176:
            self.get_logger().info(f'Width should be between [0.0176,0.1176] meters, got: {self.goal.width}')
            return GoalResponse.REJECT
        if self.goal.force > 120 or self.goal.force < 0:
            self.get_logger().info(f'Force should be between [0,120] Newtons, got: {self.goal.force}')
            return GoalResponse.REJECT
        else:
            self.get_logger().info('OnRobot goal recieved: '+ str(self.goal))
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

    async def execute_callback(self, goal_handle):
        try:
            with self.sdk.connection():
                gripper_command = models.GripperCommandRequest(
                kind=models.GripperKindEnum.Onrobot2Fg14,
                onrobot_2fg14=models.OnRobot2FG14GripperCommandRequest(
                    grip_direction=models.LinearGripDirectionEnum.Inward,
                    target_grip_width=models.LinearUnit(
                        value=self.goal.width, unit_kind=models.LinearUnitKind.Meters
                    ),
                    target_force=models.ForceUnit(
                        value=self.goal.force,
                        unit_kind=models.ForceUnitKind.Newtons,
                    ),
                    control_kind=models.OnRobot2FG14ControlKindEnum.Move,
                ),
            )
            
            res = self.sdk.equipment.control_gripper(gripper_command).ok()
            goal_handle.succeed()
            result = OnRobotGripper.Result()
            result.success = True
        except:
            goal_handle.canceled()
            result = OnRobotGripper.Result()
            result.success = False
            
        self.goal = OnRobotGripper.Goal() # Reset
        return result

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()


def main(args=None):
    rclpy.init()

    # Create the action server
    onrobot_gripper_action_server = StandardBotOnRobotActionServer()

    # Spin up the node
    rclpy.spin(onrobot_gripper_action_server)

    # Shut down the node
    onrobot_gripper_action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()