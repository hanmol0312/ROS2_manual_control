import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from px4_msgs.msg import OffboardControlMode, TrajectorySetpoint, VehicleCommand, VehicleLocalPosition, VehicleStatus,SensorCombined
from rclpy.action import ActionServer,CancelResponse, GoalResponse
from tutorial_interfaces.msg import Board
import threading
from action_msgs.msg import GoalStatus 
from rclpy.executors import MultiThreadedExecutor
from action_commands.action import Command
from rclpy.callback_groups import ReentrantCallbackGroup,MutuallyExclusiveCallbackGroup
import collections

class Action_server(Node):
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
        self.callback_group=ReentrantCallbackGroup()
        # Create publishers
        self.offboard_control_mode_publisher = self.create_publisher(
            OffboardControlMode, '/fmu/in/offboard_control_mode', qos_profile)
        self.trajectory_setpoint_publisher = self.create_publisher(
            TrajectorySetpoint, '/fmu/in/trajectory_setpoint', qos_profile)
        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand, '/fmu/in/vehicle_command', qos_profile)
        
        # Create subscribers
        self.vehicle_local_position_subscriber = self.create_subscription(
            VehicleLocalPosition, '/fmu/out/vehicle_local_position', self.vehicle_local_position_callback, qos_profile)
        self.vehicle_status_subscriber = self.create_subscription(
            VehicleStatus, '/fmu/out/vehicle_status', self.vehicle_status_callback, qos_profile)
        self.key_subscriber=self.create_subscription(Board,'/keyboard',self.key_board_callback,qos_profile)
        
        
        self._goal_queue = collections.deque()
        self._goal_queue_lock = threading.Lock()
        self._current_goal = None


        # Initialize variables
        self.offboard_setpoint_counter = 0
        self.vehicle_local_position = VehicleLocalPosition()
        self.vehicle_status = VehicleStatus()
        self.takeoff_height = -5.0
        self.sensor_combined_msg=SensorCombined()
        self.key_in=Board()


        self._action_server = ActionServer(
                self,
                Command,
                'cmd_mode',
                handle_accepted_callback=self.handle_accepted_callback,
                execute_callback=self.execute_callback,
                goal_callback=self.goal_callback,
                cancel_callback=self.cancel_callback,
                callback_group=ReentrantCallbackGroup())

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def vehicle_local_position_callback(self, vehicle_local_position):
        """Callback function for vehicle_local_position topic subscriber."""
        self.vehicle_local_position = vehicle_local_position

    def vehicle_status_callback(self, vehicle_status):
        """Callback function for vehicle_status topic subscriber."""
        self.vehicle_status = vehicle_status

    def handle_accepted_callback(self, goal_handle):
        """Start or defer execution of an already accepted goal."""
        with self._goal_queue_lock:
            if self._current_goal is not None:
                # Put incoming goal in the queue
                self._goal_queue.append(goal_handle)
                self.get_logger().info('Goal put in the queue')
            else:
                # Start goal execution right away
                self._current_goal = goal_handle
                self._current_goal.execute()

    def arm(self):
        """Send an arm command to the vehicle."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, param1=1.0)
        self.get_logger().info('Arm command sent')

    def disarm(self):
        """Send a disarm command to the vehicle."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, param1=0.0)
        self.get_logger().info('Disarm command sent')

    def engage_offboard_mode(self):
        """Switch to offboard mode."""
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_DO_SET_MODE, param1=1.0, param2=6.0)
        self.get_logger().info("Switching to offboard mode")

    def land(self):
        """Switch to land mode."""
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_NAV_LAND)
        self.get_logger().info("Switching to land mode")

    def goal_callback(self, goal_request):
        """Accept or reject a client request to begin an action."""
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        """Accept or reject a client request to cancel an action."""
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT
    


    def execute_callback(self, goal_handle):
        """Execute a goal."""
        try:
            self.get_logger().info('Executing goal...')
            self.get_logger().info(f'This is {goal_handle.request.param1}')
            result=Command.Result()
            feedback_msg = Command.Feedback()

            if self.vehicle_status.nav_state==14:
                if goal_handle.request.command==400 and goal_handle.request.param1==1.0 and self.vehicle_status.arming_state==VehicleStatus.ARMING_STATE_DISARMED:
                    while self.vehicle_status.arming_state!=2:
                        self.arm()
                        feedback_msg.arming_state_present=self.vehicle_status.arming_state
                        goal_handle.publish_feedback(feedback_msg)


                elif goal_handle.request.command==400 and goal_handle.request.param1==0.0 and self.vehicle_status.nav_state==VehicleStatus.ARMING_STATE_ARMED:
                    while VehicleStatus.arming_state!=1:
                        self.disarm()
                        feedback_msg.arming_state_present=self.vehicle_status.arming_state
                        goal_handle.publish_feedback(feedback_msg)


                elif self.vehicle_status.nav_state==VehicleStatus.ARMING_STATE_ARMED and goal_handle.request.command==21:
                    while self.vehicle_status.nav_state!=18:
                        self.publish_vehicle_command(goal_handle.request.command,goal_handle.request.param1)
                        feedback_msg.arming_state_present=VehicleStatus.nav_stat

                        goal_handle.publish_feedback(feedback_msg)

                elif self.vehicle_status.nav_state==VehicleStatus.ARMING_STATE_ARMED and goal_handle.request.command==22:
                    while self.vehicle_status.nav_state!=17:
                        self.publish_vehicle_command(goal_handle.request.command,goal_handle.request.param1)
                        feedback_msg.arming_state_present=VehicleStatus.nav_stat

                        goal_handle.publish_feedback(feedback_msg)
        
                elif goal_handle.request.param2==1.0 and self.vehicle_status.nav_state==VehicleStatus.ARMING_STATE_ARMED:
                    while self.vehicle_status.nav_state!=0:
                        # self.manual_control()
                        feedback_msg.arming_state_present=VehicleStatus.nav_stat

                        goal_handle.publish_feedback(feedback_msg)

                        

                else:
                    self.get_logger().info("Vehicle not armed cancelled command" )
                    GoalStatus.STATUS_ABORTED
                    
                    result.nav_state=self.vehicle_status.nav_state
                    result.arming_state=self.vehicle_status.arming_state
                    return result
                
            else:
                self.get_logger().info("Vehicle not set to offboatd mode cancelled command" )
                result.nav_state=self.vehicle_status.nav_state
                result.arming_state=self.vehicle_status.arming_state
                return result
            
            
            
            goal_handle.succeed()
            
            result.nav_state=self.vehicle_status.nav_state
            result.arming_state=self.vehicle_status.arming_state
            self.get_logger().info(
                'Returning result: {0}'.format(result))

            return result
            

        finally:
            with self._goal_queue_lock:
                try:
                    # Start execution of the next goal in the queue.
                    self._current_goal = self._goal_queue.popleft()
                    self.get_logger().info('Next goal pulled from the queue')
                    self._current_goal.execute()
                except IndexError:
                    # No goal in the queue.
                    self._current_goal = None

    def key_board_callback(self,msg):
        self.key_in=msg
    

    # def manual_control(self):
    #     return

    

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

        
    
    # def manual_control(self):
    #     return 
    
    

class offboard_control(Node):
    def __init__(self) -> None:
        super().__init__('Offboard_mode')

        # Configure QoS profile for publishing and subscribing
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_ALL,
        )
        self.counter=0
        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand, '/fmu/in/vehicle_command', qos_profile)
        self.offboard_control_mode_publisher = self.create_publisher(
            OffboardControlMode, '/fmu/in/offboard_control_mode', qos_profile)
        
        self.timer=self.create_timer(0.1,self.publish_offboard_mode,callback_group=MutuallyExclusiveCallbackGroup())

        
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
        """Publish the offboard control mode."""

        msg = OffboardControlMode()
        msg.position = True
        msg.velocity = True
        msg.acceleration = True
        msg.attitude = True
        msg.body_rate = True
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.offboard_control_mode_publisher.publish(msg)


    def engage_offboard_mode(self):
        self.publish_vehicle_command(
            VehicleCommand.VEHICLE_CMD_DO_SET_MODE, param1=1.0, param2=6.0)
        self.get_logger().info("Switching to offboard mode")


    def publish_offboard_mode(self):
        
        self.publish_offboard_control_heartbeat_signal()
        if self.counter == 10:
            self.engage_offboard_mode()

        if self.counter < 11:
            self.counter += 1



def main(args=None) -> None:
    print('Starting the server')
    rclpy.init(args=args)
    try:

        cmd_publisher =Action_server ()
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