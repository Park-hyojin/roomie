#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup

from roomie_msgs.action import SetPose
import time


class ArmServer(Node):
    """
    Arm Controller 임시 서버 노드
    """
    
    def __init__(self):
        super().__init__('arm_server')
        
        # Callback Group 설정
        self.callback_group = ReentrantCallbackGroup()
        
        # Action Server 초기화
        self.set_pose_server = ActionServer(
            self,
            SetPose,
            '/arm/action/set_pose',
            self.handle_set_pose,
            callback_group=self.callback_group
        )
        
        self.get_logger().info('Arm 서버가 시작되었습니다.')
    
    def handle_set_pose(self, goal_handle):
        """팔 회전 액션 처리"""
        request = goal_handle.request
        self.get_logger().info(f'팔 회전 요청: robot_id={request.robot_id}, pose_id={request.pose_id}')
        
        # 5초 대기 (팔 회전 시뮬레이션)
        self.get_logger().info(f'팔 회전 중... (pose_id={request.pose_id})')
        time.sleep(5.0)
        
        # 결과 생성
        result = SetPose.Result()
        result.robot_id = request.robot_id
        result.success = True
        
        self.get_logger().info(f'팔 회전 완료: pose_id={request.pose_id}')
        return result


def main(args=None):
    rclpy.init(args=args)
    
    try:
        arm_server = ArmServer()
        rclpy.spin(arm_server)
    except KeyboardInterrupt:
        pass
    finally:
        if 'arm_server' in locals():
            arm_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()