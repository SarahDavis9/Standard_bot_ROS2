#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
  
class ImageSubscriber(Node):
  
  def __init__(self):
    super().__init__('image_subscriber')
    self.subscription = self.create_subscription(
      Image, 
      '/standardbot1/camera_feed', 
      self.listener_callback, 
      10)
    self.subscription # prevent unused variable warning
    self.br = CvBridge()
    
  def listener_callback(self, data):
    # Receive video frame
    self.get_logger().info('Receiving video frame')

    # Convert image to a format OpenCV can use
    current_frame = self.br.imgmsg_to_cv2(data)

    # Display the image
    cv2.imshow("camera", current_frame)
    cv2.waitKey(1)
   
def main(args=None):
  rclpy.init(args=args)

  # Create image subscriber node
  image_subscriber = ImageSubscriber()

  # Spin up the node
  rclpy.spin(image_subscriber)

  # Shut down the node
  image_subscriber.destroy_node()
  rclpy.shutdown()
   
if __name__ == '__main__':
  main()