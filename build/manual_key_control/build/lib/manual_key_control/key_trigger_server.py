import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from px4_msgs.msg import OffboardControlMode, TrajectorySetpoint, VehicleCommand, VehicleLocalPosition, VehicleStatus,SensorCombined
from rclpy.action import ActionServer
from tutorial_interfaces.msg import Board
import threading
from action_msgs.msg import GoalStatus
from rclpy.executors import MultiThreadedExecutor
from action_tutorials_interfaces.action import Command

class Manual_control(Node):
    """Node for controlling a vehicle in offboard mode."""

    def __init__(self) -> None:
        super().__init__('Command_executor')

        # Configure QoS profile for publishing and subscribing
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_ALL,
        )
        self.key_values=Board()

        # Create publishers
        self.trajectory_setpoint_publisher = self.create_publisher(
            TrajectorySetpoint, '/fmu/in/trajectory_setpoint', qos_profile)
        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand, '/fmu/in/vehicle_command', qos_profile)

        # Create subscribers
        self.vehicle_local_position_subscriber = self.create_subscription(
            VehicleLocalPosition, '/fmu/out/vehicle_local_position', self.vehicle_local_position_callback, qos_profile)
        self.vehicle_status_subscriber = self.create_subscription(
            VehicleStatus, '/fmu/out/vehicle_status', self.vehicle_status_callback, qos_profile)
        self.sensor_data= self.create_subscription(
            SensorCombined, '/fmu/out/sensor_combined', self.sensor_combined, qos_profile)
        
        self._action_server = ActionServer(
            self,
            Command,
            'cmd_mode',
            self.execute_command)
        


        # Initialize variables
        self.offboard_setpoint_counter = 0
        self.vehicle_local_position = VehicleLocalPosition()
        self.vehicle_status = VehicleStatus()
        self.takeoff_height = -5.0
        self.sensor_combined_msg=SensorCombined()


    

    def engage_offboard_mode(self):
        """Switch to offboard mode."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_DO_SET_MODE, param1=1.0, param2=6.0)
        self.get_logger().info("Switching to offboard mode")

    

    def publish_offboard_control_heartbeat_signal(self):
        """Publish the offboard control mode."""
        while True:
            msg = OffboardControlMode()
            msg.position = True
            msg.velocity = True
            msg.acceleration = True
            msg.attitude = True
            msg.body_rate = True
            msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
            self.offboard_control_mode_publisher.publish(msg)

    def publish_position_setpoint(self, x: float, y: float, z: float):
        """Publish the trajectory setpoint."""
        msg = TrajectorySetpoint()
        
        
        self.get_logger().info(f"lanadf {[x, y, z]} ")
        msg.position=[x,y,z]

        
        
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.trajectory_setpoint_publisher.publish(msg)
        self.get_logger().info(f"Publishing position setpoints {[x, y, z]} ")


    def publish_vehicle_command(self, command, **params) -> None:
        """Publish a vehicle command."""

        msg = VehicleCommand()
        msg.command = command
        msg.param1 = params.get("param1", 0.0)
        msg.param2 = params.get("param2", 0.0)
        msg.param3 = params.get("param3", 0.0)
        msg.param4 = params.get("param4", 0.0)
        msg.param5 = params.get("param5", 0.0)
        msg.param6 = params.get("param6", 0.0)
        msg.param7 = params.get("param7", 0.0)
        msg.target_system = 1
        msg.target_component = 1
        msg.source_system = 1
        msg.source_component = 1
        msg.from_external = True
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.vehicle_command_publisher.publish(msg)

        
    
    def manual_control(self):
        return 
    
    def execute_command(self,goal_handle):
        self.get_logger().info('Executing command...')
        msg=goal_handle.request
        if self.vehicle_status.nav_state==VehicleStatus.NAVIGATION_STATE_OFFBOARD:
            if msg.command==400 and msg.param1==1.0:
                self.publish_vehicle_command(msg)
            elif self.vehicle_status.arming_state==VehicleStatus.ARMING_STATE_ARMED:
                self.publish_vehicle_command(msg)
                
            else:
                return GoalStatus.STATUS_ABORTED
        else:
            self.get_logger().info("Vehicle not set to offboatd mode cancelled command" )
            return GoalStatus.STATUS_ABORTED
            
        if msg.command.param2==1.0 and self.vehicle_status.nav_state==VehicleStatus.ARMING_STATE_ARMED:
            while True:
                self.manual_control()
        
        goal_handle.succeed()
        
        

        result = Command.Result()

class offboard_control(Node):
    def __init__(self) -> None:
        super().__init__('Offboard_mode')

        # Configure QoS profile for publishing and subscribing
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_ALL,
        )

        threading.Thread(target=self.publish_offboard_mode).start()
        self.counter=0
        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand, '/fmu/in/vehicle_command', qos_profile)
        self.offboard_control_mode_publisher = self.create_publisher(
            OffboardControlMode, '/fmu/in/offboard_control_mode', qos_profile)
        
    def publish_vehicle_command(self, command, **params) -> None:
        """Publish a vehicle command."""
        msg = VehicleCommand()
        msg.command = command
        msg.param1 = params.get("param1", 0.0)
        msg.param2 = params.get("param2", 0.0)
        msg.param3 = params.get("param3", 0.0)
        msg.param4 = params.get("param4", 0.0)
        msg.param5 = params.get("param5", 0.0)
        msg.param6 = params.get("param6", 0.0)
        msg.param7 = params.get("param7", 0.0)
        msg.target_system = 1
        msg.target_component = 1
        msg.source_system = 1
        msg.source_component = 1
        msg.from_external = True
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.vehicle_command_publisher.publish(msg)

    def publish_offboard_control_heartbeat_signal(self):
        msg = OffboardControlMode()
        msg.position = True
        msg.velocity = False
        msg.acceleration = False
        msg.attitude = False
        msg.body_rate = False
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.offboard_control_mode_publisher.publish(msg)

    def engage_offboard_mode(self):
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_DO_SET_MODE, param1=1.0, param2=6.0)
        self.get_logger().info("Switching to offboard mode")


    def publish_offboard_mode(self):
        while True:
            self.publish_offboard_control_heartbeat_signal()
            if self.counter == 10:
                self.engage_offboard_mode()

            if self.counter < 11:
                self.counter += 1



def main(args=None) -> None:
    print('Starting the server')
    rclpy.init(args=args)
    try:

        cmd_publisher =Manual_control ()
        off_board = offboard_control()

        executor = MultiThreadedExecutor()
        executor.add_node(cmd_publisher)
        executor.add_node(off_board)

        try:
            executor.spin()
        finally:
            executor.shutdown()
            cmd_publisher.destroy_node()
            off_board.destroy_node()

    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    try:
        main()
    except Exception as e:
        print(e)