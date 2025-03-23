from setuptools import setup
import os
from glob import glob

package_name = 'sb_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    maintainer_email='your_email@example.com',
    description='Standard Bot Controller Package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # "standard_bot_controller_node = sb_controller.standard_bot_controller_node:main"
            'standard_bot_status_node = sb_controller.standard_bot_status_node:main',
            'standard_bot_camera_feed_node = sb_controller.standard_bot_camera_feed_node:main',
            'standard_bot_camera_subscriber = sb_controller.standard_bot_camera_subscriber:main',
            'standard_bot_set_cart_pose_server_node = sb_controller.standard_bot_set_cart_pose_server_node:main',
            'standard_bot_set_cart_pose_client_node = sb_controller.standard_bot_set_cart_pose_client_node:main',
            'standard_bot_set_joint_rot_server_node = sb_controller.standard_bot_set_joint_rot_server_node:main',
            'standard_bot_set_joint_rot_client_node = sb_controller.standard_bot_set_joint_rot_client_node:main',
            'standart_bot_on_robot_gripper_server_node = sb_controller.standart_bot_on_robot_gripper_server_node:main',
            'standart_bot_on_robot_gripper_client_node = sb_controller.standart_bot_on_robot_gripper_client_node:main',
            
        ],
    },
)
