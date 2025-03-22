from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()


    status_node = Node(
        package="sb_controller",
        executable="standard_bot_status_node",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )
    camera_node = Node(
        package="sb_controller",
        executable="standard_bot_camera_feed_node",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )

    camera_subscriber = Node(
        package="sb_controller",
        executable="standard_bot_camera_subscriber",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )

    cart_pose_action_server = Node(
        package="sb_controller",
        executable="standard_bot_set_cart_pose_server_node",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )

    cart_pose_action_client = Node(
        package="sb_controller",
        executable="standard_bot_set_cart_pose_client_node",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )

    joint_rot_action_server = Node(
        package="sb_controller",
        executable="standard_bot_set_joint_rot_server_node",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )
    
    joint_rot_action_client = Node(
        package="sb_controller",
        executable="standard_bot_set_joint_rot_client_node",
        parameters=[
            {"robot_url": "http://129.101.98.221:3000"},
            {"robot_token": "xjis-b8j7nxag-2jk4rs-7i3g65g"}
        ]
    )

    # ld.add_action(controller)
    ld.add_action(status_node)
    ld.add_action(camera_node)
    ld.add_action(camera_subscriber)
    ld.add_action(cart_pose_action_server)
    ld.add_action(cart_pose_action_client)
    ld.add_action(joint_rot_action_server)
    ld.add_action(joint_rot_action_client)

    return ld