#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup

from roomie_msgs.srv import Location


class VSServer(Node):
    """
    VS(Vision System) 임시 서버 노드
    """
    
    def __init__(self):
        super().__init__('vs_server')
        
        # Callback Group 설정
        self.callback_group = ReentrantCallbackGroup()
        
        # 서비스 서버 초기화
        self.location_server = self.create_service(
            Location,
            '/vs/command/location',
            self.handle_location,
            callback_group=self.callback_group
        )
        
        self.get_logger().info('VS 서버가 시작되었습니다.')
    
    def handle_location(self, request, response):
        """위치 감지 서비스 처리"""
        self.get_logger().info(f'위치 감지 요청: robot_id={request.robot_id}')
        
        # 임시 응답 (항상 위치 2 반환 - RES_1)
        response.robot_id = request.robot_id
        response.success = True
        response.location_id = 101  # ROOM_101
        
        self.get_logger().info(f'위치 감지 응답: location_id={response.location_id}')
        
        return response


def main(args=None):
    rclpy.init(args=args)
    
    try:
        vs_server = VSServer()
        rclpy.spin(vs_server)
    except KeyboardInterrupt:
        pass
    finally:
        if 'vs_server' in locals():
            vs_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()