#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup

from roomie_msgs.srv import ControlLock, CheckDoorState, CheckItemLoaded


class IOCServer(Node):
    """
    IOC(Input/Output Controller) 임시 서버 노드
    """
    
    def __init__(self):
        super().__init__('ioc_server')
        
        # 상태 변수
        self.is_door_locked = True  # True: 잠김, False: 열림
        self.is_door_opened = False  # True: 열림, False: 닫힘
        self.door_check_count = 0  # 서랍 상태 확인 요청 횟수
        self.loading_check_count = 0  # 물품 적재 단계의 확인 요청 횟수
        self.unloading_check_count = 0  # 수령 확인 단계의 확인 요청 횟수
        self.current_phase = 'loading'  # 'loading' 또는 'unloading'
        
        # Callback Group 설정
        self.callback_group = ReentrantCallbackGroup()
        
        # 서비스 서버 초기화
        self.control_lock_server = self.create_service(
            ControlLock,
            '/ioc/control_lock',
            self.handle_control_lock,
            callback_group=self.callback_group
        )
        
        self.check_door_server = self.create_service(
            CheckDoorState,
            '/ioc/check_door_state',
            self.handle_check_door,
            callback_group=self.callback_group
        )
        
        self.check_item_server = self.create_service(
            CheckItemLoaded,
            '/ioc/check_item_loaded',
            self.handle_check_item,
            callback_group=self.callback_group
        )
        
        self.get_logger().info('IOC 서버가 시작되었습니다.')
    
    def handle_control_lock(self, request, response):
        """서랍 잠금 제어 서비스 처리"""
        self.get_logger().info(f'서랍 잠금 제어 요청: robot_id={request.robot_id}, locked={request.locked}')
        
        self.is_door_locked = request.locked
        response.robot_id = request.robot_id
        response.success = True
        
        action = "잠금" if request.locked else "잠금 해제"
        self.get_logger().info(f'서랍 {action} 완료')
        
        # 잠금 요청이면 다음 단계로 전환
        if request.locked:
            if self.current_phase == 'loading':
                self.current_phase = 'unloading'
                self.loading_check_count = 0  # 카운터 초기화
                self.get_logger().info('물품 적재 단계 → 수령 확인 단계로 전환')
            elif self.current_phase == 'unloading':
                self.current_phase = 'loading'
                self.unloading_check_count = 0  # 카운터 초기화
                self.get_logger().info('수령 확인 단계 → 물품 적재 단계로 전환')
        
        # 잠금 해제 시 서랍이 열림 상태로 변경
        if not request.locked:
            self.is_door_opened = True
            self.get_logger().info('서랍이 열렸습니다')
        
        return response
    
    def handle_check_door(self, request, response):
        """서랍문 상태 확인 서비스 처리"""
        self.get_logger().info(f'서랍문 상태 확인 요청: robot_id={request.robot_id}')
        
        response.robot_id = request.robot_id
        
        # 첫 번째는 열림, 두 번째부터는 닫힘으로 응답
        self.door_check_count += 1
        if self.door_check_count == 1:
            response.is_opened = True
            self.get_logger().info('서랍 상태: 열림 (첫 번째 요청)')
        else:
            response.is_opened = False
            self.get_logger().info('서랍 상태: 닫힘 (두 번째 이상 요청)')
        
        return response
    
    def handle_check_item(self, request, response):
        """물품 적재 확인 서비스 처리"""
        self.get_logger().info(f'물품 적재 확인 요청: robot_id={request.robot_id}')
        
        response.robot_id = request.robot_id
        
        if self.current_phase == 'loading':
            # 물품 적재 단계: 첫 번째는 미적재, 두 번째는 적재됨으로 응답
            self.loading_check_count += 1
            if self.loading_check_count == 1:
                response.item_loaded = False
                self.get_logger().info('물품 상태: 미적재 (물품 적재 단계 첫 번째 요청)')
            else:
                response.item_loaded = True
                self.get_logger().info('물품 상태: 적재됨 (물품 적재 단계 두 번째 요청)')
        else:  # unloading
            # 수령 확인 단계: 첫 번째는 적재됨, 두 번째는 미적재로 응답
            self.unloading_check_count += 1
            if self.unloading_check_count == 1:
                response.item_loaded = True
                self.get_logger().info('물품 상태: 적재됨 (수령 확인 단계 첫 번째 요청)')
            else:
                response.item_loaded = False
                self.get_logger().info('물품 상태: 미적재 (수령 확인 단계 두 번째 요청)')
        
        return response


def main(args=None):
    rclpy.init(args=args)
    
    try:
        ioc_server = IOCServer()
        rclpy.spin(ioc_server)
    except KeyboardInterrupt:
        pass
    finally:
        if 'ioc_server' in locals():
            ioc_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()