#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup

from roomie_msgs.action import PerformTask
from roomie_msgs.msg import RobotState, BatteryStatus, RoomiePose

import json
import time


class RMSServer(Node):
    """
    RMS(Roomie Main Service) 테스트 서버 노드
    """
    
    def __init__(self):
        super().__init__('rms_server')
        
        # Callback Group 설정
        self.callback_group = ReentrantCallbackGroup()
        
        # 작업 할당 액션 클라이언트
        self.perform_task_client = ActionClient(
            self,
            PerformTask,
            '/roomie/action/perform_task'
        )
        
        # 상태 Subscriber들
        self.robot_state_sub = self.create_subscription(
            RobotState,
            '/roomie/status/robot_state',
            self.handle_robot_state,
            10
        )
        
        self.battery_status_sub = self.create_subscription(
            BatteryStatus,
            '/roomie/status/battery_status',
            self.handle_battery_status,
            10
        )
        
        self.pose_sub = self.create_subscription(
            RoomiePose,
            '/roomie/status/roomie_pose',
            self.handle_pose,
            10
        )
        
        # 5초 후에 작업 할당 (한 번만)
        self.timer = self.create_timer(5.0, self.send_task)
        
        self.get_logger().info('RMS 테스트 서버가 시작되었습니다.')
    
    def send_task(self):
        """작업 할당 전송"""
        # 타이머 취소 (한 번만 실행)
        self.timer.cancel()

        if not self.perform_task_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().warn('RC 노드가 준비되지 않았습니다.')
            return
            
        # 주문 정보
        order_info = {
            "room_number": "101",
            "items": [
                {
                    "name": "스파게티",
                    "quantity": 2
                },
                {
                    "name": "피자",
                    "quantity": 1
                }
            ]
        }
        
        # 작업 요청 생성
        goal_msg = PerformTask.Goal()
        goal_msg.robot_id = 0
        goal_msg.task_id = 100
        goal_msg.task_type_id = 0  # 배송 작업
        goal_msg.target_location_id = 101  # 목적지 (ROOM_101)
        goal_msg.pickup_location_id = 2    # 픽업 위치 (RES_1)
        goal_msg.order_info = json.dumps(order_info, ensure_ascii=False)
        
        self.get_logger().info('작업 할당 전송 시작...')
        self.get_logger().info(f'작업 정보: task_id={goal_msg.task_id}, type={goal_msg.task_type_id}')
        self.get_logger().info(f'목적지: {goal_msg.target_location_id}, 픽업: {goal_msg.pickup_location_id}')
        self.get_logger().info(f'주문 정보: {goal_msg.order_info}')
        
        # 작업 전송
        self.send_goal_future = self.perform_task_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        self.send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        """작업 할당 응답 처리"""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('작업이 거부되었습니다.')
            return
            
        self.get_logger().info('작업이 수락되었습니다.')
        
        # 결과 대기
        self.result_future = goal_handle.get_result_async()
        self.result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        """작업 완료 결과 처리"""
        result = future.result().result
        if result.success:
            self.get_logger().info('작업이 성공적으로 완료되었습니다.')
            self.get_logger().info(f'메시지: {result.message}')
        else:
            self.get_logger().error('작업이 실패했습니다.')
            self.get_logger().error(f'메시지: {result.message}')
    
    def feedback_callback(self, feedback_msg):
        """작업 진행 상황 피드백 처리"""
        feedback = feedback_msg.feedback
        self.get_logger().info(f'작업 진행 중... robot_id={feedback.robot_id}, task_id={feedback.task_id}')
    
    def handle_robot_state(self, msg):
        """로봇 상태 처리"""
        # self.get_logger().info(f'로봇 상태 수신: robot_id={msg.robot_id}, state={msg.robot_state_id}')
    
    def handle_battery_status(self, msg):
        """배터리 상태 처리"""
        # self.get_logger().info(f'배터리 상태 수신: robot_id={msg.robot_id}, level={msg.charge_percentage}, charging={msg.is_charging}')
    
    def handle_pose(self, msg):
        """로봇 위치 처리"""
        # self.get_logger().info(f'로봇 위치 수신: robot_id={msg.robot_id}, floor={msg.floor_id}, x={msg.pose.position.x}, y={msg.pose.position.y}')


def main(args=None):
    rclpy.init(args=args)
    
    try:
        rms_server = RMSServer()
        rclpy.spin(rms_server)
    except KeyboardInterrupt:
        pass
    finally:
        if 'rms_server' in locals():
            rms_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()