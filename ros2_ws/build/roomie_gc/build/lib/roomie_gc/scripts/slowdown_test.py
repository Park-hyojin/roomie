#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from roomie_msgs.msg import Tracking


class SlowdownTester(Node):
    def __init__(self):
        super().__init__('slowdown_tester')
        # Parameters for topic names to sit between Nav2 and the base controller
        self.declare_parameter('nav_cmd_topic', '/cmd_vel_nav')
        self.declare_parameter('base_cmd_topic', '/cmd_vel')
        nav_cmd_topic = self.get_parameter('nav_cmd_topic').value
        base_cmd_topic = self.get_parameter('base_cmd_topic').value

        # Publisher (to base) and Subscribers (from Nav2, VS)
        self.cmd_pub = self.create_publisher(Twist, base_cmd_topic, 10)
        self.nav_cmd_sub = self.create_subscription(Twist, nav_cmd_topic, self.on_nav_cmd, 10)
        self.tracking_sub = self.create_subscription(Tracking, '/vs/tracking', self.on_tracking, 10)

        # 기본 속도와 감속 스케일
        self.base_linear = 0.3
        self.base_angular = 0.0
        self.speed_scale = 1.0

        # Logging throttle
        self.declare_parameter('log_every_n', 10)
        self.log_every_n = int(self.get_parameter('log_every_n').value)
        self.msg_count = 0

        self.get_logger().info('SlowdownTester 시작: Nav2 cmd를 스케일링하여 base로 전달')
        self.get_logger().info(f' - 입력(nav_cmd_topic): {nav_cmd_topic}')
        self.get_logger().info(f' - 출력(base_cmd_topic): {base_cmd_topic}')

    def on_tracking(self, msg: Tracking):
        # event: 0=NONE, 1=SLOW_DOWN, 2=LOST, 3=RESUME
        if msg.event == 1:
            self.speed_scale = 0.3
            self.get_logger().info('Tracking 이벤트: SLOW_DOWN → 속도 스케일 0.3')
        elif msg.event == 2:
            self.speed_scale = 0.0
            self.get_logger().info('Tracking 이벤트: LOST → 정지')
        elif msg.event == 3:
            self.speed_scale = 1.0
            self.get_logger().info('Tracking 이벤트: RESUME → 속도 스케일 1.0')
        else:
            # NONE: 유지
            pass

    def on_nav_cmd(self, msg: Twist):
        # Scale Nav2 controller output and forward to the base
        scaled = Twist()
        scaled.linear.x = msg.linear.x * self.speed_scale
        scaled.linear.y = msg.linear.y * self.speed_scale
        scaled.angular.z = msg.angular.z * self.speed_scale
        self.cmd_pub.publish(scaled)
        # Throttled logging of input/output
        self.msg_count += 1
        if self.log_every_n > 0 and (self.msg_count % self.log_every_n == 0):
            self.get_logger().info(
                f'cmd scale={self.speed_scale:.2f} | in: vx={msg.linear.x:.3f}, vy={msg.linear.y:.3f}, wz={msg.angular.z:.3f} '
                f'→ out: vx={scaled.linear.x:.3f}, vy={scaled.linear.y:.3f}, wz={scaled.angular.z:.3f}'
            )


def main():
    rclpy.init()
    node = SlowdownTester()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


