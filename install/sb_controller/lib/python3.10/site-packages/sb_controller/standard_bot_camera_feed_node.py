#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2 as cv
import base64
import numpy as np
from standardbots import StandardBotsRobot, models
from rclpy.callback_groups import ReentrantCallbackGroup

class StandardBotCameraFeed(Node):
  
  def __init__(self):
    super().__init__('standard_bot_camera_feed')
    self.publisher_ = self.create_publisher(Image, '/standardbot1/camera_feed', 10)
    timer_period = 0.1
    self.cb_group = ReentrantCallbackGroup()
    self.timer = self.create_timer(timer_period, self.timer_callback, self.cb_group)
    self.br = CvBridge()

    self.declare_parameter("robot_url", "default_value")
    self.declare_parameter("robot_token", "default_value")

    # Simon:
    self.sdk = StandardBotsRobot(
        url=self.get_parameter("robot_url").value,
        token=self.get_parameter("robot_token").value,
        robot_kind=StandardBotsRobot.RobotKind.Live
        )
    
  def timer_callback(self):
    self.get_logger().info("Publishing camera image!")
    body = models.CameraFrameRequest(
        camera_settings=models.CameraSettings(
            brightness=0,
            contrast=50,
            exposure=250,
            sharpness=50,
            hue=0,
            whiteBalance=4600,
            autoWhiteBalance=True,
        )
    )

    with self.sdk.connection():
        try:
          res = self.sdk.camera.data.get_color_frame(body)
          print(f"Result Data: {res.data}")
          res.ok()  # Runs okay
          raw_data = res.response.data

          # Extract the base64 encoded data
          base64_data = raw_data.decode().split(",")[1]
          # Decode the base64 data
          image_data = base64.b64decode(base64_data)

          # Convert the decoded data to a numpy array
          np_data = np.frombuffer(image_data, np.uint8)

          # Read the image from the numpy array
          frame = cv.imdecode(np_data, cv.IMREAD_COLOR)

          # Publish the image to the on-robot camera feed topic 
          self.publisher_.publish(self.br.cv2_to_imgmsg(frame))
          self.get_logger().info('Publishing video frame')
        except: 
          self.get_logger().info(f'Error: {res.status}')

def main(args=None):
  rclpy.init(args=args)

  # Create camera feed node (publisher)
  camera_feed_publisher = StandardBotCameraFeed()

  # Spin up the node
  rclpy.spin(camera_feed_publisher)

  # Shut down the node
  camera_feed_publisher.destroy_node()
  rclpy.shutdown()
   
if __name__ == '__main__':
  main()




