#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile

# PyQt5 import
from PyQt5.QtWidgets import (QApplication, QMainWindow, QVBoxLayout, QHBoxLayout, 
                             QPushButton, QTextEdit, QLabel, QWidget, QLineEdit)
from PyQt5.QtCore import QTimer, pyqtSignal, QThread

# ROS2 메시지 import
from roomie_msgs.msg import RobotGuiEvent


class ROS2Thread(QThread):
    """ROS2 통신을 담당하는 스레드"""
    message_received = pyqtSignal(str)
    
    def __init__(self):
        super().__init__()
        self.node = None
        self.publisher = None
        self.subscriber = None
        
    def run(self):
        """ROS2 노드 실행"""
        rclpy.init()
        self.node = Node('gui_test_tool')
        
        # QoS 설정
        qos = QoSProfile(depth=10)
        
        # Publisher 초기화 (GUI → RC)
        self.publisher = self.node.create_publisher(
            RobotGuiEvent,
            '/robot_gui/event',
            qos
        )
        
        # Subscriber 초기화 (RC → GUI)
        self.subscriber = self.node.create_subscription(
            RobotGuiEvent,
            '/robot_gui/event',
            self._message_callback,
            qos
        )
        
        self.node.get_logger().info('GUI Test Tool 초기화 완료')
        
        # ROS2 스핀
        while rclpy.ok():
            rclpy.spin_once(self.node, timeout_sec=0.1)
            
    def _message_callback(self, msg):
        """메시지 수신 콜백"""
        message = f"[수신] robot_id={msg.robot_id}, event_id={msg.rgui_event_id}, task_id={msg.task_id}, detail='{msg.detail}'"
        self.message_received.emit(message)
        
    def send_event(self, event_id):
        """이벤트 전송"""
        if self.publisher:
            msg = RobotGuiEvent()
            msg.robot_id = 0  # 테스트용 robot_id
            msg.rgui_event_id = event_id
            msg.task_id = 0   # 테스트용 task_id
            msg.timestamp = self.node.get_clock().now().to_msg()
            msg.detail = f"GUI Test Tool에서 전송한 이벤트 {event_id}"
            
            self.publisher.publish(msg)
            self.node.get_logger().info(f'이벤트 전송: event_id={event_id}')
            
    def cleanup(self):
        """정리"""
        if self.node:
            self.node.destroy_node()
        rclpy.shutdown()


class GUITestWindow(QMainWindow):
    """GUI 테스트 도구 메인 윈도우"""
    
    def __init__(self):
        super().__init__()
        self.ros2_thread = ROS2Thread()
        self.init_ui()
        self.init_ros2()
        
    def init_ui(self):
        """UI 초기화"""
        self.setWindowTitle('GUI Test Tool')
        self.setGeometry(100, 100, 600, 400)
        
        # 중앙 위젯
        central_widget = QWidget()
        self.setCentralWidget(central_widget)
        
        # 메인 레이아웃
        layout = QVBoxLayout(central_widget)
        
        # 제목
        title_label = QLabel('GUI Test Tool - ROS2 이벤트 테스트')
        title_label.setStyleSheet('font-size: 16px; font-weight: bold; margin: 10px;')
        layout.addWidget(title_label)
        
        # 버튼 영역
        button_layout = QHBoxLayout()
        
        # 이벤트 전송 버튼들
        self.btn_100 = QPushButton('100 (수령 확인)')
        self.btn_104 = QPushButton('16 (서랍 열기)')
        self.btn_105 = QPushButton('105 (적재 완료)')
        
        self.btn_100.clicked.connect(lambda: self.send_event(100))
        self.btn_104.clicked.connect(lambda: self.send_event(16))
        self.btn_105.clicked.connect(lambda: self.send_event(105))
        
        button_layout.addWidget(self.btn_100)
        button_layout.addWidget(self.btn_104)
        button_layout.addWidget(self.btn_105)
        
        layout.addLayout(button_layout)
        
        # 수신 메시지 표시 영역
        receive_label = QLabel('수신된 메시지:')
        layout.addWidget(receive_label)
        
        self.receive_text = QTextEdit()
        self.receive_text.setReadOnly(True)
        self.receive_text.setMaximumHeight(200)
        layout.addWidget(self.receive_text)
        
        # 전송 메시지 표시 영역
        send_label = QLabel('전송된 메시지:')
        layout.addWidget(send_label)
        
        self.send_text = QTextEdit()
        self.send_text.setReadOnly(True)
        self.send_text.setMaximumHeight(100)
        layout.addWidget(self.send_text)
        
        # 상태 표시
        self.status_label = QLabel('상태: 초기화 중...')
        layout.addWidget(self.status_label)
        
    def init_ros2(self):
        """ROS2 스레드 초기화"""
        self.ros2_thread.message_received.connect(self.on_message_received)
        self.ros2_thread.start()
        
        # 상태 업데이트 타이머
        self.status_timer = QTimer()
        self.status_timer.timeout.connect(self.update_status)
        self.status_timer.start(1000)  # 1초마다 업데이트
        
    def send_event(self, event_id):
        """이벤트 전송"""
        self.ros2_thread.send_event(event_id)
        
        # 전송 메시지 표시
        message = f"[전송] event_id={event_id} - {self.get_event_description(event_id)}"
        self.send_text.append(message)
        
    def on_message_received(self, message):
        """메시지 수신 처리"""
        self.receive_text.append(message)
        
    def get_event_description(self, event_id):
        """이벤트 ID에 대한 설명 반환"""
        descriptions = {
            100: "수령 확인 버튼 클릭",
            16: "서랍 열기 요청",
            105: "적재 완료 버튼 클릭"
        }
        return descriptions.get(event_id, f"알 수 없는 이벤트 {event_id}")
        
    def update_status(self):
        """상태 업데이트"""
        if self.ros2_thread.isRunning():
            self.status_label.setText('상태: ROS2 연결됨')
        else:
            self.status_label.setText('상태: ROS2 연결 안됨')
            
    def closeEvent(self, event):
        """창 닫기 이벤트"""
        self.ros2_thread.cleanup()
        self.ros2_thread.quit()
        self.ros2_thread.wait()
        event.accept()


def main():
    """메인 함수"""
    app = QApplication(sys.argv)
    window = GUITestWindow()
    window.show()
    sys.exit(app.exec_())


if __name__ == '__main__':
    main()
