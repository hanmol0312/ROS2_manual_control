import rclpy
from rclpy.node import Node
from tutorial_interfaces.msg import Board
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy



class keyboard_trigger(Node):
    def __init__(self):

        super().__init__("Key_board_trigger")
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_ALL,
        )
        self.key_values = Board()

        self.key_state={
            "key_up":0,
            "key_down":0,
            "key_left":0,
            "key_right":0,
            "key_left_shift":0,
            "key_left_ctrl":0,
            "w":0,
            "a":0,
            "s":0,
            "d":0,
            "q":0,
            "e":0,
            "c":0,
            "z":0,
            "x":0,
            "j":0
        }

        self.key_subscriber=self.create_subscription(Board,'/keyboard',self.trigger_callback,qos_profile)


    def trigger_callback(self,msg):
        self.get_logger().info(f'{msg}')
    
    











def main(args=None) -> None:
    rclpy.init(args=args)
    key_board = keyboard_trigger()
    rclpy.spin(key_board)
    key_board.destroy_node()
    rclpy.shutdown()
    
    


if __name__ == '__main__':
    try:
        main()
    except Exception as e:
        print(e)
