import sys
from PyQt5.QtWidgets import (QApplication, QMainWindow, QWidget, QVBoxLayout,
                             QHBoxLayout, QPushButton, QLabel, QFrame,
                             QGridLayout, QSizePolicy)
from PyQt5.QtCore import Qt, QTimer, QPoint
from PyQt5.QtGui import QPainter, QColor, QPen
import math

# --- 1. A* (A-star) Pathfinding Algorithm with Direction Cost ---
class AStar:
    def __init__(self, waypoints):
        self.waypoints = waypoints

    def get_neighbors(self, node):
        return [self.waypoints[neighbor_id] for neighbor_id in self.waypoints[node]['neighbors']]

    def heuristic(self, a, b):
        return abs(a['pos'].x() - b['pos'].x()) + abs(a['pos'].y() - b['pos'].y())

    def get_direction(self, from_pos, to_pos):
        """두 점 사이의 방향을 반환 (8방향)"""
        dx = to_pos.x() - from_pos.x()
        dy = to_pos.y() - from_pos.y()
        
        if dx == 0 and dy == 0:
            return None
        elif dx == 0:
            return 'vertical'
        elif dy == 0:
            return 'horizontal'
        else:
            return 'diagonal'

    def direction_change_cost(self, prev_dir, curr_dir):
        """방향 전환 비용 계산"""
        if prev_dir is None or curr_dir is None:
            return 0
        if prev_dir == curr_dir:
            return 0  # 같은 방향이면 비용 없음
        else:
            return 2  # 방향이 바뀌면 추가 비용

    def find_path(self, start_id, end_id, obstacles):
        open_set = {start_id}
        came_from = {}
        g_score = {wp_id: float('inf') for wp_id in self.waypoints}
        g_score[start_id] = 0
        f_score = {wp_id: float('inf') for wp_id in self.waypoints}
        f_score[start_id] = self.heuristic(self.waypoints[start_id], self.waypoints[end_id])
        
        # 방향 정보를 저장하기 위한 딕셔너리
        direction_from = {}

        while open_set:
            current_id = min(open_set, key=lambda wp_id: f_score[wp_id])
            if current_id == end_id:
                path = []
                while current_id in came_from:
                    path.append(current_id)
                    current_id = came_from[current_id]
                path.append(start_id)
                return path[::-1]

            open_set.remove(current_id)

            for neighbor in self.get_neighbors(current_id):
                neighbor_id = neighbor['id']
                if neighbor_id in obstacles:
                    continue

                # 기본 이동 비용 (거리 기반)
                base_cost = 1
                
                # 방향 전환 비용 계산
                current_pos = self.waypoints[current_id]['pos']
                neighbor_pos = self.waypoints[neighbor_id]['pos']
                current_direction = self.get_direction(current_pos, neighbor_pos)
                
                prev_direction = direction_from.get(current_id, None)
                direction_cost = self.direction_change_cost(prev_direction, current_direction)
                
                tentative_g_score = g_score[current_id] + base_cost + direction_cost
                
                if tentative_g_score < g_score[neighbor_id]:
                    came_from[neighbor_id] = current_id
                    direction_from[neighbor_id] = current_direction
                    g_score[neighbor_id] = tentative_g_score
                    f_score[neighbor_id] = g_score[neighbor_id] + self.heuristic(neighbor, self.waypoints[end_id])
                    if neighbor_id not in open_set:
                        open_set.add(neighbor_id)
        
        return None

# --- 2. GUI Canvas Class for Drawing ---
class WaypointCanvas(QFrame):
    def __init__(self, app_parent, parent=None):
        super().__init__(parent)
        # 캔버스 크기를 늘려서 모든 웨이포인트가 보이도록 함
        self.setFixedSize(600, 350)
        self.app_parent = app_parent

    def paintEvent(self, event):
        painter = QPainter(self)
        painter.setRenderHint(QPainter.Antialiasing)
        
        painter.fillRect(self.rect(), Qt.white)
        
        path = self.app_parent.path
        no_path_found = self.app_parent.no_path_found
        waypoints = self.app_parent.waypoints
        obstacles = self.app_parent.obstacles
        robot_pos = self.app_parent.robot_pos

        # 경로 시각화
        if path and not no_path_found:
            path_points = [waypoints[wp_id]['pos'] for wp_id in path]
            pen = QPen(QColor(100, 100, 255, 150), 8, Qt.SolidLine)
            painter.setPen(pen)
            
            for i in range(len(path_points) - 1):
                painter.drawLine(path_points[i], path_points[i+1])
        
        # 웨이포인트와 연결선 그리기
        pen = QPen(QColor(200, 200, 200), 2, Qt.DotLine)
        painter.setPen(pen)
        for wp_id, wp_info in waypoints.items():
            for neighbor_id in wp_info['neighbors']:
                neighbor_pos = waypoints[neighbor_id]['pos']
                painter.drawLine(wp_info['pos'], neighbor_pos)

        # 웨이포인트 상태에 따른 색상 설정
        for wp_id, wp_info in waypoints.items():
            rect = wp_info['pos'].x() - 15, wp_info['pos'].y() - 15, 30, 30
            
            if wp_id == robot_pos:
                painter.setBrush(QColor(0, 120, 215)) # 로봇 (파란색)
                painter.setPen(QPen(QColor(50, 50, 50), 2))
            elif wp_id in obstacles:
                painter.setBrush(QColor(180, 50, 50)) # 장애물 (빨간색)
                painter.setPen(QPen(QColor(50, 50, 50), 2))
            elif path is not None and wp_id in path:
                painter.setBrush(QColor(150, 200, 255)) # 경로에 포함된 웨이포인트 (하늘색)
                painter.setPen(QPen(QColor(50, 50, 50), 2))
            else:
                painter.setBrush(Qt.NoBrush) # 기본 (채우기 없음)
                painter.setPen(QPen(QColor(255, 0, 0), 2)) # 빨간색 테두리

            painter.drawRect(*rect)
            
            # 웨이포인트 ID 표시
            painter.setPen(QColor(0, 0, 0))
            painter.setFont(painter.font())
            painter.drawText(rect[0], rect[1], rect[2], rect[3], Qt.AlignCenter, wp_id)
        
        if no_path_found:
            painter.setPen(QColor(255, 0, 0))
            painter.setFont(painter.font())
            painter.drawText(self.rect(), Qt.AlignCenter, "경로를 찾을 수 없습니다!")

    def mousePressEvent(self, event):
        if event.button() == Qt.LeftButton:
            for wp_id, wp_info in self.app_parent.waypoints.items():
                rect = wp_info['pos'].x() - 15, wp_info['pos'].y() - 15, 30, 30
                if QPoint(rect[0], rect[1]).x() <= event.x() <= QPoint(rect[0]+rect[2], rect[1]+rect[3]).x() and \
                   QPoint(rect[0], rect[1]).y() <= event.y() <= QPoint(rect[0]+rect[2], rect[1]+rect[3]).y():
                    if wp_id == 'C1' or wp_id == 'A5' or wp_id == self.app_parent.robot_pos:
                        return
                    self.app_parent.toggle_obstacle(wp_id)
                    break

# --- 3. Main Application Window ---
class WaypointApp(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("웨이포인트 경로 시뮬레이션")
        self.resize(1000, 450)
        
        # 웨이포인트 위치를 조정하여 모두 보이도록 함
        self.waypoints = {
            'A1': {'id': 'A1', 'pos': QPoint(80, 50), 'neighbors': ['B1', 'A2']},
            'A2': {'id': 'A2', 'pos': QPoint(180, 50), 'neighbors': ['A1', 'A3']},
            'A3': {'id': 'A3', 'pos': QPoint(280, 50), 'neighbors': ['B3', 'A2', 'A4']},
            'A4': {'id': 'A4', 'pos': QPoint(380, 50), 'neighbors': ['A3', 'A5']},
            'A5': {'id': 'A5', 'pos': QPoint(480, 50), 'neighbors': ['B5', 'A4']},
            
            'B1': {'id': 'B1', 'pos': QPoint(80, 150), 'neighbors': ['A1', 'C1']},
            'B3': {'id': 'B3', 'pos': QPoint(280, 150), 'neighbors': ['A3', 'C3']},
            'B5': {'id': 'B5', 'pos': QPoint(480, 150), 'neighbors': ['A5', 'C5']},
            
            'C1': {'id': 'C1', 'pos': QPoint(80, 250), 'neighbors': ['B1', 'C2']},
            'C2': {'id': 'C2', 'pos': QPoint(180, 250), 'neighbors': ['C1', 'C3']},
            'C3': {'id': 'C3', 'pos': QPoint(280, 250), 'neighbors': ['B3', 'C2', 'C4']},
            'C4': {'id': 'C4', 'pos': QPoint(380, 250), 'neighbors': ['C3', 'C5']},
            'C5': {'id': 'C5', 'pos': QPoint(480, 250), 'neighbors': ['B5', 'C4']},
        }
        
        self.start_wp = 'C1'
        self.end_wp = 'A5'
        self.robot_pos = self.start_wp
        self.obstacles = set()
        self.path = None
        self.path_index = 0
        self.no_path_found = False
        
        self.astar = AStar(self.waypoints)

        self.timer = QTimer(self)
        self.timer.setInterval(3000)
        self.timer.timeout.connect(self.move_robot)

        self.initUI()
        self.recalculate_path()
        
    def initUI(self):
        central_widget = QWidget()
        self.setCentralWidget(central_widget)
        main_layout = QHBoxLayout(central_widget)
        
        self.canvas = WaypointCanvas(self)
        main_layout.addWidget(self.canvas, 1)
        
        control_panel = QFrame()
        control_panel.setFrameShape(QFrame.StyledPanel)
        control_panel.setSizePolicy(QSizePolicy.Preferred, QSizePolicy.Expanding)
        
        control_layout = QVBoxLayout(control_panel)
        
        self.status_label = QLabel("상태: 초기화됨")
        control_layout.addWidget(self.status_label)

        self.start_button = QPushButton("시작")
        self.start_button.clicked.connect(self.toggle_simulation)
        control_layout.addWidget(self.start_button)
        
        self.reset_button = QPushButton("리셋")
        self.reset_button.clicked.connect(self.reset_simulation)
        control_layout.addWidget(self.reset_button)
        
        # 경로 정보 표시 라벨 추가
        self.path_label = QLabel("경로: 계산 중...")
        self.path_label.setWordWrap(True)
        control_layout.addWidget(self.path_label)
        
        control_layout.addStretch(1)

        main_layout.addWidget(control_panel, 1)
        
    def toggle_simulation(self):
        if self.timer.isActive():
            self.timer.stop()
            self.start_button.setText("시작")
            self.status_label.setText("상태: 정지")
        else:
            self.recalculate_path()
            if self.path:
                self.timer.start()
                self.start_button.setText("정지")
                self.status_label.setText("상태: 이동 중...")
                self.no_path_found = False
            else:
                self.status_label.setText("상태: 경로를 찾을 수 없음!")
                self.no_path_found = True
            self.canvas.update()
            
    def move_robot(self):
        if not self.path or self.path_index >= len(self.path) - 1:
            self.timer.stop()
            self.start_button.setText("시작")
            self.status_label.setText("상태: 도착 완료")
            return

        self.path_index += 1
        self.robot_pos = self.path[self.path_index]
        
        if self.path_index + 1 < len(self.path) and self.path[self.path_index + 1] in self.obstacles:
            self.recalculate_path()
        
        self.canvas.update()

    def reset_simulation(self):
        self.timer.stop()
        self.start_button.setText("시작")
        self.robot_pos = self.start_wp
        self.obstacles = set()
        self.path = None
        self.path_index = 0
        self.no_path_found = False
        self.status_label.setText("상태: 초기화됨")
        self.recalculate_path()
        self.canvas.update()

    def toggle_obstacle(self, wp_id):
        if wp_id in self.obstacles:
            self.obstacles.remove(wp_id)
        else:
            self.obstacles.add(wp_id)
        
        self.recalculate_path()
        
        if self.path:
            self.no_path_found = False
            if self.timer.isActive():
                 self.status_label.setText("상태: 경로 재계산됨")
        else:
            self.no_path_found = True
            self.status_label.setText("상태: 경로를 찾을 수 없음!")

        self.canvas.update()

    def recalculate_path(self):
        start_node = self.robot_pos
        end_node = self.end_wp
        
        self.path = self.astar.find_path(start_node, end_node, self.obstacles)
        
        if self.path:
            self.path_index = 0
            if self.robot_pos == self.start_wp:
                 self.path_index = 0
            elif self.robot_pos in self.path:
                self.path_index = self.path.index(self.robot_pos)
            else:
                self.robot_pos = self.path[0]
                self.path_index = 0
            
            # 경로 정보 업데이트
            path_str = " -> ".join(self.path)
            self.path_label.setText(f"경로: {path_str}")
        else:
            self.path_label.setText("경로: 없음")
        
        self.canvas.update()

# --- 4. Main Execution Block ---
if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = WaypointApp()
    ex.show()
    sys.exit(app.exec_())