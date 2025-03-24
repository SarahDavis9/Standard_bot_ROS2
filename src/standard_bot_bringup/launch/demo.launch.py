from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    ip_simon = "http://129.101.98.221:3000"
    token_simon = "xjis-b8j7nxag-2jk4rs-7i3g65g"

    ip_alvin = "http://129.101.98.206:3000"
    token_alvin = "8u4-49vooyro-i0barcdc-mw144"

    status_node = Node(
        package="sb_controller",
        executable="standard_bot_status_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )
    camera_node = Node(
        package="sb_controller",
        executable="standard_bot_camera_feed_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )

    camera_subscriber = Node(
        package="sb_controller",
        executable="standard_bot_camera_subscriber",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )

    cart_pose_action_server = Node(
        package="sb_controller",
        executable="standard_bot_set_cart_pose_server_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )

    cart_pose_action_client = Node(
        package="sb_controller",
        executable="standard_bot_set_cart_pose_client_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )

    joint_rot_action_server = Node(
        package="sb_controller",
        executable="standard_bot_set_joint_rot_server_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )
    
    joint_rot_action_client = Node(
        package="sb_controller",
        executable="standard_bot_set_joint_rot_client_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )

    on_robot_gripper_action_server = Node(
        package="sb_controller",
        executable="standart_bot_on_robot_gripper_server_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )
    
    on_robot_gripper_action_client = Node(
        package="sb_controller",
        executable="standart_bot_on_robot_gripper_client_node",
        parameters=[
            {"robot_url": ip_alvin},
            {"robot_token": token_alvin}
        ]
    )

    ld.add_action(status_node)
    ld.add_action(camera_node)
    ld.add_action(camera_subscriber)
    ld.add_action(cart_pose_action_server)
    ld.add_action(cart_pose_action_client)
    ld.add_action(joint_rot_action_server)
    ld.add_action(joint_rot_action_client)
    ld.add_action(on_robot_gripper_action_server)
    ld.add_action(on_robot_gripper_action_client)

    return ld