import rclpy
from rclpy.executors import MultiThreadedExecutor
from sb_controller.standard_bot_camera_feed_node import MyStandardBotCameraFeed
from sb_controller.standard_bot_status_node import MyStandardBotStatusNode
from sb_controller.standard_bot_camera_subscriber import ImageSubscriber

def main(args=None):
    rclpy.init(args=args)
    standard_bot_status = MyStandardBotStatusNode()
    standard_bot_camera_feed = MyStandardBotCameraFeed()
    image_subscriber = ImageSubscriber()

    exec = MultiThreadedExecutor()
    exec.add_node(standard_bot_status)
    exec.add_node(standard_bot_camera_feed)
    exec.add_node(image_subscriber)

    exec.spin()
    exec.shutdown()