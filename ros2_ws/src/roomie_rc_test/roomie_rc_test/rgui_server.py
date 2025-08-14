#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.qos import QoSProfile

from roomie_msgs.action import StartCountdown, ReturnCountdown
from roomie_msgs.msg import RobotGuiEvent

import time


class RGUIServer(Node):
    """
    RGUI(Robot GUI) 테스트 서버 노드
    """
    
    def __init__(self):
        super().__init__('rgui_server')
        
        # Callback Group 설정
        self.callback_group = ReentrantCallbackGroup()
        
        # QoS 프로파일 설정
        self.qos_profile = QoSProfile(depth=10)
        
        # 타이머 변수들
        self.drawer_timer = None
        self.loading_timer = None
        self.unload_timer = None
        
        # 현재 단계 추적
        self.current_phase = None  # 'loading' 또는 'unloading'
        
        # 출발 카운트다운 액션 서버
        self.start_countdown_server = ActionServer(
            self,
            StartCountdown,
            '/robot_gui/action/start_countdown',
            self.handle_start_countdown,
            callback_group=self.callback_group
        )
        
        # 복귀 카운트다운 액션 서버
        self.return_countdown_server = ActionServer(
            self,
            ReturnCountdown,
            '/robot_gui/action/return_countdown',
            self.handle_return_countdown,
            callback_group=self.callback_group
        )
        
        # GUI 이벤트 Publisher/Subscriber
        self.event_pub = self.create_publisher(
            RobotGuiEvent,
            '/robot_gui/event',
            self.qos_profile
        )
        
        self.event_sub = self.create_subscription(
            RobotGuiEvent,
            '/robot_gui/event',
            self.handle_gui_event,
            self.qos_profile
        )
        
        self.get_logger().info('RGUI 테스트 서버가 시작되었습니다.')
    
    def handle_start_countdown(self, goal_handle):
        """출발 카운트다운 처리"""
        request = goal_handle.request
        self.get_logger().info(f'출발 카운트다운 시작: robot_id={request.robot_id}, task_id={request.task_id}')
        
        # 피드백 메시지 생성
        feedback_msg = StartCountdown.Feedback()
        
        # 5초 카운트다운 시뮬레이션
        for count in range(5, 0, -1):
            if not rclpy.ok():
                return
                
            feedback_msg.remaining_time = count
            goal_handle.publish_feedback(feedback_msg)
            
            self.get_logger().info(f'카운트다운: {count}')
            time.sleep(1.0)
        
        # 결과 메시지 생성
        result = StartCountdown.Result()
        result.robot_id = request.robot_id
        result.success = True
        
        goal_handle.succeed()
        return result
    
    def handle_return_countdown(self, goal_handle):
        """복귀 카운트다운 처리"""
        request = goal_handle.request
        self.get_logger().info(f'복귀 카운트다운 시작: robot_id={request.robot_id}')
        
        # 피드백 메시지 생성
        feedback_msg = ReturnCountdown.Feedback()
        
        # 5초 카운트다운 시뮬레이션
        for count in range(5, 0, -1):
            if not rclpy.ok():
                return
                
            feedback_msg.remaining_time = count
            goal_handle.publish_feedback(feedback_msg)
            
            self.get_logger().info(f'복귀 카운트다운: {count}')
            time.sleep(1.0)
        
        # 결과 메시지 생성
        result = ReturnCountdown.Result()
        result.robot_id = request.robot_id
        result.success = True
        
        goal_handle.succeed()
        return result
    
    def handle_gui_event(self, msg):
        """GUI 이벤트 처리"""
        self.get_logger().info(f'GUI 이벤트 수신: robot_id={msg.robot_id}, event_id={msg.rgui_event_id}')
        self.get_logger().info(f'이벤트 내용: {msg.detail}')
        
        # 주문 정보 이벤트(13)를 받으면 물품 적재 단계 시작
        if msg.rgui_event_id == 13:
            self.current_phase = 'loading'
            self.get_logger().info('주문 정보 수신 (물품 적재 단계), 5초 후 서랍 열기 이벤트 전송 예정')
            self.drawer_timer = self.create_timer(5.0, self.send_drawer_open_event)
        # 배송 완료 이벤트(15)를 받으면 수령 확인 단계 시작 (이미 unloading 단계가 아닐 때만)
        elif msg.rgui_event_id == 15 and self.current_phase != 'unloading':
            self.current_phase = 'unloading'
            self.get_logger().info('배송 완료 수신 (수령 확인 단계), 5초 후 서랍 열기 이벤트 전송 예정')
            self.drawer_timer = self.create_timer(5.0, self.send_drawer_open_event)
        # 서랍 열림 이벤트(16)를 받으면 현재 단계에 따라 다른 이벤트 전송
        elif msg.rgui_event_id == 16:
            if self.current_phase == 'loading':
                self.get_logger().info('서랍 열림 수신 (물품 적재 단계), 5초 후 적재 완료 이벤트 전송 예정')
                self.loading_timer = self.create_timer(5.0, self.send_loading_complete_event)
            elif self.current_phase == 'unloading':
                self.get_logger().info('서랍 열림 수신 (수령 확인 단계), 5초 후 수령 확인 이벤트 전송 예정')
                self.unload_timer = self.create_timer(5.0, self.send_unload_check_event)
        # 물품 미적재/있음 이벤트(27)를 받으면 현재 단계에 따라 다른 이벤트 전송
        elif msg.rgui_event_id == 27:
            if self.current_phase == 'loading':
                self.get_logger().info('물품 미적재 수신 (물품 적재 단계), 5초 후 적재 완료 이벤트 재전송 예정')
                self.loading_timer = self.create_timer(5.0, self.send_loading_complete_event)
            elif self.current_phase == 'unloading':
                self.get_logger().info('물품 있음 수신 (수령 확인 단계), 5초 후 수령 확인 이벤트 재전송 예정')
                self.unload_timer = self.create_timer(5.0, self.send_unload_check_event)
        # 서랍 잠금 완료 이벤트(18)를 받으면 현재 단계 초기화
        elif msg.rgui_event_id == 18:
            self.current_phase = None
            self.get_logger().info('서랍 잠금 완료 수신, 단계 초기화')
    
    def send_drawer_open_event(self):
        """서랍 열기 이벤트 전송"""
        # 타이머 취소 (한 번만 실행)
        if self.drawer_timer:
            self.drawer_timer.cancel()
            self.drawer_timer = None
        
        # 이벤트 메시지 생성
        msg = RobotGuiEvent()
        msg.robot_id = 0
        msg.rgui_event_id = 104  # 서랍 열기 이벤트
        msg.timestamp = self.get_clock().now().to_msg()
        msg.detail = ""
        
        # 이벤트 발행
        self.event_pub.publish(msg)
        self.get_logger().info('서랍 열기 이벤트 전송 완료')
    
    def send_loading_complete_event(self):
        """적재 완료 이벤트 전송"""
        # 타이머 취소 (한 번만 실행)
        if self.loading_timer:
            self.loading_timer.cancel()
            self.loading_timer = None
        
        # 이벤트 메시지 생성
        msg = RobotGuiEvent()
        msg.robot_id = 0
        msg.rgui_event_id = 105  # 적재 완료 이벤트
        msg.timestamp = self.get_clock().now().to_msg()
        msg.detail = ""
        
        # 이벤트 발행
        self.event_pub.publish(msg)
        self.get_logger().info('적재 완료 이벤트 전송 완료')

    def send_unload_check_event(self):
        """수령 확인 이벤트 전송"""
        # 타이머 취소 (한 번만 실행)
        if self.unload_timer:
            self.unload_timer.cancel()
            self.unload_timer = None
        
        # 이벤트 메시지 생성
        msg = RobotGuiEvent()
        msg.robot_id = 0
        msg.rgui_event_id = 100  # 수령 확인 이벤트
        msg.timestamp = self.get_clock().now().to_msg()
        msg.detail = ""
        
        # 이벤트 발행
        self.event_pub.publish(msg)
        self.get_logger().info('수령 확인 이벤트 전송 완료')


def main(args=None):
    rclpy.init(args=args)
    
    try:
        rgui_server = RGUIServer()
        rclpy.spin(rgui_server)
    except KeyboardInterrupt:
        pass
    finally:
        if 'rgui_server' in locals():
            rgui_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()