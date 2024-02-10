// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_tutorials_interfaces:action/Offboard.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__TRAITS_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "action_tutorials_interfaces/action/detail/offboard__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: attitude
  {
    out << "attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude, out);
    out << ", ";
  }

  // member: body_rate
  {
    out << "body_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.body_rate, out);
    out << ", ";
  }

  // member: thrust_and_torque
  {
    out << "thrust_and_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_and_torque, out);
    out << ", ";
  }

  // member: direct_actuator
  {
    out << "direct_actuator: ";
    rosidl_generator_traits::value_to_yaml(msg.direct_actuator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude, out);
    out << "\n";
  }

  // member: body_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.body_rate, out);
    out << "\n";
  }

  // member: thrust_and_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust_and_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_and_torque, out);
    out << "\n";
  }

  // member: direct_actuator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direct_actuator: ";
    rosidl_generator_traits::value_to_yaml(msg.direct_actuator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_Goal & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_Goal>()
{
  return "action_tutorials_interfaces::action::Offboard_Goal";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_Goal>()
{
  return "action_tutorials_interfaces/action/Offboard_Goal";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: nav_state
  {
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_Result & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_Result>()
{
  return "action_tutorials_interfaces::action::Offboard_Result";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_Result>()
{
  return "action_tutorials_interfaces/action/Offboard_Result";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: nav_state_present
  {
    out << "nav_state_present: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state_present, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav_state_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state_present: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state_present, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_Feedback & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_Feedback>()
{
  return "action_tutorials_interfaces::action::Offboard_Feedback";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_Feedback>()
{
  return "action_tutorials_interfaces/action/Offboard_Feedback";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_tutorials_interfaces/action/detail/offboard__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_SendGoal_Request & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_SendGoal_Request>()
{
  return "action_tutorials_interfaces::action::Offboard_SendGoal_Request";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_SendGoal_Request>()
{
  return "action_tutorials_interfaces/action/Offboard_SendGoal_Request";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::Offboard_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::Offboard_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_SendGoal_Response & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_SendGoal_Response>()
{
  return "action_tutorials_interfaces::action::Offboard_SendGoal_Response";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_SendGoal_Response>()
{
  return "action_tutorials_interfaces/action/Offboard_SendGoal_Response";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_SendGoal>()
{
  return "action_tutorials_interfaces::action::Offboard_SendGoal";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_SendGoal>()
{
  return "action_tutorials_interfaces/action/Offboard_SendGoal";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_tutorials_interfaces::action::Offboard_SendGoal_Request>::value &&
    has_fixed_size<action_tutorials_interfaces::action::Offboard_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_tutorials_interfaces::action::Offboard_SendGoal_Request>::value &&
    has_bounded_size<action_tutorials_interfaces::action::Offboard_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_tutorials_interfaces::action::Offboard_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_tutorials_interfaces::action::Offboard_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_tutorials_interfaces::action::Offboard_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_GetResult_Request & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_GetResult_Request>()
{
  return "action_tutorials_interfaces::action::Offboard_GetResult_Request";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_GetResult_Request>()
{
  return "action_tutorials_interfaces/action/Offboard_GetResult_Request";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_tutorials_interfaces/action/detail/offboard__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_GetResult_Response & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_GetResult_Response>()
{
  return "action_tutorials_interfaces::action::Offboard_GetResult_Response";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_GetResult_Response>()
{
  return "action_tutorials_interfaces/action/Offboard_GetResult_Response";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::Offboard_Result>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::Offboard_Result>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_GetResult>()
{
  return "action_tutorials_interfaces::action::Offboard_GetResult";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_GetResult>()
{
  return "action_tutorials_interfaces/action/Offboard_GetResult";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_tutorials_interfaces::action::Offboard_GetResult_Request>::value &&
    has_fixed_size<action_tutorials_interfaces::action::Offboard_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_tutorials_interfaces::action::Offboard_GetResult_Request>::value &&
    has_bounded_size<action_tutorials_interfaces::action::Offboard_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_tutorials_interfaces::action::Offboard_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_tutorials_interfaces::action::Offboard_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_tutorials_interfaces::action::Offboard_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_tutorials_interfaces/action/detail/offboard__traits.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Offboard_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Offboard_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Offboard_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_tutorials_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_tutorials_interfaces::action::Offboard_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_tutorials_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_tutorials_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_tutorials_interfaces::action::Offboard_FeedbackMessage & msg)
{
  return action_tutorials_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_tutorials_interfaces::action::Offboard_FeedbackMessage>()
{
  return "action_tutorials_interfaces::action::Offboard_FeedbackMessage";
}

template<>
inline const char * name<action_tutorials_interfaces::action::Offboard_FeedbackMessage>()
{
  return "action_tutorials_interfaces/action/Offboard_FeedbackMessage";
}

template<>
struct has_fixed_size<action_tutorials_interfaces::action::Offboard_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_tutorials_interfaces::action::Offboard_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_tutorials_interfaces::action::Offboard_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_tutorials_interfaces::action::Offboard_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_tutorials_interfaces::action::Offboard_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_tutorials_interfaces::action::Offboard>
  : std::true_type
{
};

template<>
struct is_action_goal<action_tutorials_interfaces::action::Offboard_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_tutorials_interfaces::action::Offboard_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_tutorials_interfaces::action::Offboard_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__TRAITS_HPP_
