#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from roomie_msgs.msg import Obstacle
import tkinter as tk
from tkinter import ttk
import threading
import time


class ObstacleGUI(Node):
    def __init__(self):
        super().__init__('obstacle_gui')
        
        # ROS2 퍼블리셔 설정
        self.obstacle_pub = self.create_publisher(Obstacle, '/vs/obstacle', 10)
        
        # GUI 상태 변수
        self.is_publishing = False
        self.publish_thread = None
        
        # GUI 제어 변수
        self.dynamic_var = None
        self.depth_var = None
        
        # GUI 생성
        self.create_gui()
        
        self.get_logger().info('🚀 Obstacle GUI 노드가 시작되었습니다.')
    
    def create_gui(self):
        """GUI 생성"""
        self.root = tk.Tk()
        self.root.title("Roomie Obstacle Controller")
        self.root.geometry("450x400")
        self.root.configure(bg='#f0f0f0')
        
        # GUI 제어 변수 초기화
        self.dynamic_var = tk.BooleanVar(value=True)
        self.depth_var = tk.DoubleVar(value=1.0)
        
        # 메인 프레임
        main_frame = ttk.Frame(self.root, padding="20")
        main_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))
        
        # 제목
        title_label = ttk.Label(main_frame, text="🚨 장애물 시뮬레이터", 
                               font=('Arial', 16, 'bold'))
        title_label.grid(row=0, column=0, columnspan=2, pady=(0, 20))
        
        # 토글 버튼
        self.toggle_button = ttk.Button(main_frame, text="시작", 
                                       command=self.toggle_publishing,
                                       style='Toggle.TButton')
        self.toggle_button.grid(row=1, column=0, columnspan=2, pady=10)
        
        # 상태 표시
        self.status_label = ttk.Label(main_frame, text="상태: 중지됨", 
                                     font=('Arial', 12))
        self.status_label.grid(row=2, column=0, columnspan=2, pady=10)
        
        # 정보 표시
        info_frame = ttk.LabelFrame(main_frame, text="정보", padding="10")
        info_frame.grid(row=3, column=0, columnspan=2, pady=10, sticky=(tk.W, tk.E))
        
        ttk.Label(info_frame, text="토픽: /vs/obstacle").grid(row=0, column=0, sticky=tk.W)
        self.depth_info_label = ttk.Label(info_frame, text="거리: 1.0m")
        self.depth_info_label.grid(row=1, column=0, sticky=tk.W)
        ttk.Label(info_frame, text="주기: 0.2초").grid(row=2, column=0, sticky=tk.W)
        
        # 제어 패널
        control_frame = ttk.LabelFrame(main_frame, text="제어", padding="10")
        control_frame.grid(row=4, column=0, columnspan=2, pady=10, sticky=(tk.W, tk.E))
        
        # Dynamic 체크박스
        dynamic_checkbox = ttk.Checkbutton(control_frame, text="Dynamic 장애물", 
                                         variable=self.dynamic_var,
                                         command=self.update_info_display)
        dynamic_checkbox.grid(row=0, column=0, columnspan=2, sticky=tk.W, pady=5)
        
        # Depth 슬라이더
        ttk.Label(control_frame, text="Depth (거리):").grid(row=1, column=0, sticky=tk.W, pady=(10, 0))
        
        depth_frame = ttk.Frame(control_frame)
        depth_frame.grid(row=2, column=0, columnspan=2, sticky=(tk.W, tk.E), pady=5)
        
        self.depth_scale = ttk.Scale(depth_frame, from_=0.0, to=8.0, 
                                   variable=self.depth_var, orient=tk.HORIZONTAL,
                                   command=self.update_depth_display)
        self.depth_scale.grid(row=0, column=0, sticky=(tk.W, tk.E), padx=(0, 10))
        
        self.depth_value_label = ttk.Label(depth_frame, text="1.0m")
        self.depth_value_label.grid(row=0, column=1)
        
        # 프레임 확장 설정
        depth_frame.columnconfigure(0, weight=1)
        
        # 버튼 스타일 설정
        style = ttk.Style()
        style.configure('Toggle.TButton', font=('Arial', 12, 'bold'))
        
        # 창 닫기 이벤트 처리
        self.root.protocol("WM_DELETE_WINDOW", self.on_closing)
    
    def update_depth_display(self, value=None):
        """Depth 값 표시 업데이트"""
        depth_value = self.depth_var.get()
        self.depth_value_label.config(text=f"{depth_value:.1f}m")
        if hasattr(self, 'depth_info_label'):
            self.depth_info_label.config(text=f"거리: {depth_value:.1f}m")
    
    def update_info_display(self):
        """정보 표시 업데이트"""
        self.update_depth_display()
    
    def toggle_publishing(self):
        """퍼블리싱 토글"""
        if not self.is_publishing:
            self.start_publishing()
        else:
            self.stop_publishing()
    
    def start_publishing(self):
        """퍼블리싱 시작"""
        self.is_publishing = True
        self.toggle_button.config(text="중지")
        self.status_label.config(text="상태: 발행 중")
        self.get_logger().info('📡 장애물 메시지 발행을 시작합니다.')
        
        # 별도 스레드에서 메시지 발행
        self.publish_thread = threading.Thread(target=self.publish_loop, daemon=True)
        self.publish_thread.start()
    
    def stop_publishing(self):
        """퍼블리싱 중지"""
        self.is_publishing = False
        self.toggle_button.config(text="시작")
        self.status_label.config(text="상태: 중지됨")
        self.get_logger().info('⏹️ 장애물 메시지 발행을 중지합니다.')
    
    def publish_loop(self):
        """메시지 발행 루프"""
        while self.is_publishing:
            try:
                # 장애물 메시지 생성
                obstacle_msg = Obstacle()
                obstacle_msg.robot_id = 1
                obstacle_msg.dynamic = self.dynamic_var.get()  # GUI에서 설정한 값
                obstacle_msg.x = 0.5  # 화면 가운데
                obstacle_msg.y = 0.0  # 화면의 상하
                obstacle_msg.depth = self.depth_var.get()  # GUI에서 설정한 거리
                
                # 메시지 발행
                self.obstacle_pub.publish(obstacle_msg)
                dynamic_str = "Dynamic" if obstacle_msg.dynamic else "Static"
                self.get_logger().info(f'📤 장애물 메시지 발행: {dynamic_str}, 거리={obstacle_msg.depth:.1f}m')
                
                # 0.2초 대기
                time.sleep(0.2)
                
            except Exception as e:
                self.get_logger().error(f'❌ 메시지 발행 중 오류: {e}')
                break
    
    def on_closing(self):
        """창 닫기 처리"""
        if self.is_publishing:
            self.stop_publishing()
        self.root.destroy()
        self.destroy_node()
    
    def run_gui(self):
        """GUI 실행"""
        try:
            self.root.mainloop()
        except KeyboardInterrupt:
            self.get_logger().info('🛑 GUI가 중단되었습니다.')
            self.on_closing()


def main(args=None):
    rclpy.init(args=args)
    
    try:
        gui_node = ObstacleGUI()
        gui_node.run_gui()
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()
