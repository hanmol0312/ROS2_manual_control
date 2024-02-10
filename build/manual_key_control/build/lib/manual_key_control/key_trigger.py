import rclpy
from rclpy.node import Node
from tutorial_interfaces.msg import Board
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from action_commands.action import Command
from rclpy.action import ActionClient



class keyboard_trigger(Node):
    def __init__(self):

        super().__init__("Key_board_trigger")
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_ALL,
        )
        self.key_values = Board()
        self.command_var=Command.Goal()

        self.key_subscriber=self.create_subscription(Board,'/keyboard',self.trigger_callback,qos_profile)
        self._action_client = ActionClient(self, Command, 'cmd_mode')

    def trigger_callback(self,msg):

        if msg.q == 1:
            #Arming Mode
            self.get_logger().info('Arming the drone')
            self.send_goal(400,param1=1.0)
        if msg.e == 1:
            #Disarm Mode
            self.get_logger().info('Disarming the drone')
            self.send_goal(400,param1=0.0)
        if msg.c == 1:
            #Manual_control Mode
            self.get_logger().info('Enabling manual_control drone')
            self.send_goal(176,param1=1.0,param2=1.0)
        if msg.x == 1:
            #Takeoff Mode
            self.get_logger().info('taking off the drone')
            self.send_goal(22)
        if msg.z == 1:
            #Land Mode
            self.get_logger().info('landing the drone')
            self.send_goal(21)
    

    







    def send_goal(self, command,**params):
        goal_msg = Command.Goal()
        goal_msg.command = command
        goal_msg.param1 = params.get("param1", 0.0)
        goal_msg.param2 = params.get("param2", 0.0)
        goal_msg.param3 = params.get("param3", 0.0)
        goal_msg.param4 = params.get("param4", 0.0)
        goal_msg.param5 = params.get("param5", 0.0)
        goal_msg.param6 = params.get("param6", 0.0)
        goal_msg.param7 = params.get("param7", 0.0)
        goal_msg.target_system = 1
        goal_msg.target_component = 1
        goal_msg.source_system = 1
        goal_msg.source_component = 1
        goal_msg.from_external = True
        goal_msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)

        self.get_logger().info('waiting for the server')
        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

        return
        
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result))
        return
    
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)







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
