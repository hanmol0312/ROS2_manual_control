// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_tutorials_interfaces:action/Command.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__COMMAND__BUILDER_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_tutorials_interfaces/action/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_Goal_from_external
{
public:
  explicit Init_Command_Goal_from_external(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Command_Goal from_external(::action_tutorials_interfaces::action::Command_Goal::_from_external_type arg)
  {
    msg_.from_external = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_confirmation
{
public:
  explicit Init_Command_Goal_confirmation(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_from_external confirmation(::action_tutorials_interfaces::action::Command_Goal::_confirmation_type arg)
  {
    msg_.confirmation = std::move(arg);
    return Init_Command_Goal_from_external(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_source_component
{
public:
  explicit Init_Command_Goal_source_component(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_confirmation source_component(::action_tutorials_interfaces::action::Command_Goal::_source_component_type arg)
  {
    msg_.source_component = std::move(arg);
    return Init_Command_Goal_confirmation(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_source_system
{
public:
  explicit Init_Command_Goal_source_system(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_source_component source_system(::action_tutorials_interfaces::action::Command_Goal::_source_system_type arg)
  {
    msg_.source_system = std::move(arg);
    return Init_Command_Goal_source_component(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_target_component
{
public:
  explicit Init_Command_Goal_target_component(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_source_system target_component(::action_tutorials_interfaces::action::Command_Goal::_target_component_type arg)
  {
    msg_.target_component = std::move(arg);
    return Init_Command_Goal_source_system(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_target_system
{
public:
  explicit Init_Command_Goal_target_system(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_target_component target_system(::action_tutorials_interfaces::action::Command_Goal::_target_system_type arg)
  {
    msg_.target_system = std::move(arg);
    return Init_Command_Goal_target_component(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_command
{
public:
  explicit Init_Command_Goal_command(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_target_system command(::action_tutorials_interfaces::action::Command_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Command_Goal_target_system(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param7
{
public:
  explicit Init_Command_Goal_param7(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_command param7(::action_tutorials_interfaces::action::Command_Goal::_param7_type arg)
  {
    msg_.param7 = std::move(arg);
    return Init_Command_Goal_command(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param6
{
public:
  explicit Init_Command_Goal_param6(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_param7 param6(::action_tutorials_interfaces::action::Command_Goal::_param6_type arg)
  {
    msg_.param6 = std::move(arg);
    return Init_Command_Goal_param7(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param5
{
public:
  explicit Init_Command_Goal_param5(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_param6 param5(::action_tutorials_interfaces::action::Command_Goal::_param5_type arg)
  {
    msg_.param5 = std::move(arg);
    return Init_Command_Goal_param6(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param4
{
public:
  explicit Init_Command_Goal_param4(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_param5 param4(::action_tutorials_interfaces::action::Command_Goal::_param4_type arg)
  {
    msg_.param4 = std::move(arg);
    return Init_Command_Goal_param5(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param3
{
public:
  explicit Init_Command_Goal_param3(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_param4 param3(::action_tutorials_interfaces::action::Command_Goal::_param3_type arg)
  {
    msg_.param3 = std::move(arg);
    return Init_Command_Goal_param4(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param2
{
public:
  explicit Init_Command_Goal_param2(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_param3 param2(::action_tutorials_interfaces::action::Command_Goal::_param2_type arg)
  {
    msg_.param2 = std::move(arg);
    return Init_Command_Goal_param3(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_param1
{
public:
  explicit Init_Command_Goal_param1(::action_tutorials_interfaces::action::Command_Goal & msg)
  : msg_(msg)
  {}
  Init_Command_Goal_param2 param1(::action_tutorials_interfaces::action::Command_Goal::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return Init_Command_Goal_param2(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

class Init_Command_Goal_timestamp
{
public:
  Init_Command_Goal_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_Goal_param1 timestamp(::action_tutorials_interfaces::action::Command_Goal::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Command_Goal_param1(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_Goal>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_Goal_timestamp();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_Result_command_execution
{
public:
  Init_Command_Result_command_execution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Command_Result command_execution(::action_tutorials_interfaces::action::Command_Result::_command_execution_type arg)
  {
    msg_.command_execution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_Result>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_Result_command_execution();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_Feedback_command_present_state
{
public:
  Init_Command_Feedback_command_present_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Command_Feedback command_present_state(::action_tutorials_interfaces::action::Command_Feedback::_command_present_state_type arg)
  {
    msg_.command_present_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_Feedback>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_Feedback_command_present_state();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_SendGoal_Request_goal
{
public:
  explicit Init_Command_SendGoal_Request_goal(::action_tutorials_interfaces::action::Command_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Command_SendGoal_Request goal(::action_tutorials_interfaces::action::Command_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_SendGoal_Request msg_;
};

class Init_Command_SendGoal_Request_goal_id
{
public:
  Init_Command_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_SendGoal_Request_goal goal_id(::action_tutorials_interfaces::action::Command_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Command_SendGoal_Request_goal(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_SendGoal_Request>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_SendGoal_Request_goal_id();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_SendGoal_Response_stamp
{
public:
  explicit Init_Command_SendGoal_Response_stamp(::action_tutorials_interfaces::action::Command_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Command_SendGoal_Response stamp(::action_tutorials_interfaces::action::Command_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_SendGoal_Response msg_;
};

class Init_Command_SendGoal_Response_accepted
{
public:
  Init_Command_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_SendGoal_Response_stamp accepted(::action_tutorials_interfaces::action::Command_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Command_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_SendGoal_Response>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_SendGoal_Response_accepted();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_GetResult_Request_goal_id
{
public:
  Init_Command_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Command_GetResult_Request goal_id(::action_tutorials_interfaces::action::Command_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_GetResult_Request>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_GetResult_Request_goal_id();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_GetResult_Response_result
{
public:
  explicit Init_Command_GetResult_Response_result(::action_tutorials_interfaces::action::Command_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Command_GetResult_Response result(::action_tutorials_interfaces::action::Command_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_GetResult_Response msg_;
};

class Init_Command_GetResult_Response_status
{
public:
  Init_Command_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_GetResult_Response_result status(::action_tutorials_interfaces::action::Command_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Command_GetResult_Response_result(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_GetResult_Response>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_GetResult_Response_status();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Command_FeedbackMessage_feedback
{
public:
  explicit Init_Command_FeedbackMessage_feedback(::action_tutorials_interfaces::action::Command_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Command_FeedbackMessage feedback(::action_tutorials_interfaces::action::Command_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_FeedbackMessage msg_;
};

class Init_Command_FeedbackMessage_goal_id
{
public:
  Init_Command_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_FeedbackMessage_feedback goal_id(::action_tutorials_interfaces::action::Command_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Command_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Command_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Command_FeedbackMessage>()
{
  return action_tutorials_interfaces::action::builder::Init_Command_FeedbackMessage_goal_id();
}

}  // namespace action_tutorials_interfaces

#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__COMMAND__BUILDER_HPP_
