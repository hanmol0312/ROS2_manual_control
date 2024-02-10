// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_tutorials_interfaces:action/Offboard.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__BUILDER_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_tutorials_interfaces/action/detail/offboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_Goal_direct_actuator
{
public:
  explicit Init_Offboard_Goal_direct_actuator(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Offboard_Goal direct_actuator(::action_tutorials_interfaces::action::Offboard_Goal::_direct_actuator_type arg)
  {
    msg_.direct_actuator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_thrust_and_torque
{
public:
  explicit Init_Offboard_Goal_thrust_and_torque(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  Init_Offboard_Goal_direct_actuator thrust_and_torque(::action_tutorials_interfaces::action::Offboard_Goal::_thrust_and_torque_type arg)
  {
    msg_.thrust_and_torque = std::move(arg);
    return Init_Offboard_Goal_direct_actuator(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_body_rate
{
public:
  explicit Init_Offboard_Goal_body_rate(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  Init_Offboard_Goal_thrust_and_torque body_rate(::action_tutorials_interfaces::action::Offboard_Goal::_body_rate_type arg)
  {
    msg_.body_rate = std::move(arg);
    return Init_Offboard_Goal_thrust_and_torque(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_attitude
{
public:
  explicit Init_Offboard_Goal_attitude(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  Init_Offboard_Goal_body_rate attitude(::action_tutorials_interfaces::action::Offboard_Goal::_attitude_type arg)
  {
    msg_.attitude = std::move(arg);
    return Init_Offboard_Goal_body_rate(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_acceleration
{
public:
  explicit Init_Offboard_Goal_acceleration(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  Init_Offboard_Goal_attitude acceleration(::action_tutorials_interfaces::action::Offboard_Goal::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_Offboard_Goal_attitude(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_velocity
{
public:
  explicit Init_Offboard_Goal_velocity(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  Init_Offboard_Goal_acceleration velocity(::action_tutorials_interfaces::action::Offboard_Goal::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Offboard_Goal_acceleration(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_position
{
public:
  explicit Init_Offboard_Goal_position(::action_tutorials_interfaces::action::Offboard_Goal & msg)
  : msg_(msg)
  {}
  Init_Offboard_Goal_velocity position(::action_tutorials_interfaces::action::Offboard_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Offboard_Goal_velocity(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

class Init_Offboard_Goal_timestamp
{
public:
  Init_Offboard_Goal_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Offboard_Goal_position timestamp(::action_tutorials_interfaces::action::Offboard_Goal::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Offboard_Goal_position(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_Goal>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_Goal_timestamp();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_Result_nav_state
{
public:
  Init_Offboard_Result_nav_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Offboard_Result nav_state(::action_tutorials_interfaces::action::Offboard_Result::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_Result>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_Result_nav_state();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_Feedback_nav_state_present
{
public:
  Init_Offboard_Feedback_nav_state_present()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Offboard_Feedback nav_state_present(::action_tutorials_interfaces::action::Offboard_Feedback::_nav_state_present_type arg)
  {
    msg_.nav_state_present = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_Feedback>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_Feedback_nav_state_present();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_SendGoal_Request_goal
{
public:
  explicit Init_Offboard_SendGoal_Request_goal(::action_tutorials_interfaces::action::Offboard_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Offboard_SendGoal_Request goal(::action_tutorials_interfaces::action::Offboard_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_SendGoal_Request msg_;
};

class Init_Offboard_SendGoal_Request_goal_id
{
public:
  Init_Offboard_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Offboard_SendGoal_Request_goal goal_id(::action_tutorials_interfaces::action::Offboard_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Offboard_SendGoal_Request_goal(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_SendGoal_Request>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_SendGoal_Request_goal_id();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_SendGoal_Response_stamp
{
public:
  explicit Init_Offboard_SendGoal_Response_stamp(::action_tutorials_interfaces::action::Offboard_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Offboard_SendGoal_Response stamp(::action_tutorials_interfaces::action::Offboard_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_SendGoal_Response msg_;
};

class Init_Offboard_SendGoal_Response_accepted
{
public:
  Init_Offboard_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Offboard_SendGoal_Response_stamp accepted(::action_tutorials_interfaces::action::Offboard_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Offboard_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_SendGoal_Response>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_SendGoal_Response_accepted();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_GetResult_Request_goal_id
{
public:
  Init_Offboard_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Offboard_GetResult_Request goal_id(::action_tutorials_interfaces::action::Offboard_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_GetResult_Request>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_GetResult_Request_goal_id();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_GetResult_Response_result
{
public:
  explicit Init_Offboard_GetResult_Response_result(::action_tutorials_interfaces::action::Offboard_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Offboard_GetResult_Response result(::action_tutorials_interfaces::action::Offboard_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_GetResult_Response msg_;
};

class Init_Offboard_GetResult_Response_status
{
public:
  Init_Offboard_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Offboard_GetResult_Response_result status(::action_tutorials_interfaces::action::Offboard_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Offboard_GetResult_Response_result(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_GetResult_Response>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_GetResult_Response_status();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Offboard_FeedbackMessage_feedback
{
public:
  explicit Init_Offboard_FeedbackMessage_feedback(::action_tutorials_interfaces::action::Offboard_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Offboard_FeedbackMessage feedback(::action_tutorials_interfaces::action::Offboard_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_FeedbackMessage msg_;
};

class Init_Offboard_FeedbackMessage_goal_id
{
public:
  Init_Offboard_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Offboard_FeedbackMessage_feedback goal_id(::action_tutorials_interfaces::action::Offboard_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Offboard_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Offboard_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Offboard_FeedbackMessage>()
{
  return action_tutorials_interfaces::action::builder::Init_Offboard_FeedbackMessage_goal_id();
}

}  // namespace action_tutorials_interfaces

#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__BUILDER_HPP_
