cmake_minimum_required(VERSION 3.8)
project(sb_controller)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(action_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate interfaces for the actions
rosidl_generate_interfaces(${PROJECT_NAME}
  "actions/SetCartPose.action"
  "actions/SetJointRot.action"
  "actions/OnRobotGripper.action"
  DEPENDENCIES action_msgs std_msgs
)

# Install action files
install(
  FILES 
    "actions/SetCartPose.action"
    "actions/SetJointRot.action"
    "actions/OnRobotGripper.action"
  DESTINATION share/${PROJECT_NAME}/actions
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
