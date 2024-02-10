// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_tutorials_interfaces:action/Offboard.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__STRUCT_H_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_Goal
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  bool position;
  bool velocity;
  bool acceleration;
  bool attitude;
  bool body_rate;
  bool thrust_and_torque;
  bool direct_actuator;
} action_tutorials_interfaces__action__Offboard_Goal;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_Goal.
typedef struct action_tutorials_interfaces__action__Offboard_Goal__Sequence
{
  action_tutorials_interfaces__action__Offboard_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_Result
{
  uint8_t nav_state;
} action_tutorials_interfaces__action__Offboard_Result;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_Result.
typedef struct action_tutorials_interfaces__action__Offboard_Result__Sequence
{
  action_tutorials_interfaces__action__Offboard_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_Feedback
{
  uint8_t nav_state_present;
} action_tutorials_interfaces__action__Offboard_Feedback;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_Feedback.
typedef struct action_tutorials_interfaces__action__Offboard_Feedback__Sequence
{
  action_tutorials_interfaces__action__Offboard_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_tutorials_interfaces/action/detail/offboard__struct.h"

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_tutorials_interfaces__action__Offboard_Goal goal;
} action_tutorials_interfaces__action__Offboard_SendGoal_Request;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_SendGoal_Request.
typedef struct action_tutorials_interfaces__action__Offboard_SendGoal_Request__Sequence
{
  action_tutorials_interfaces__action__Offboard_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_tutorials_interfaces__action__Offboard_SendGoal_Response;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_SendGoal_Response.
typedef struct action_tutorials_interfaces__action__Offboard_SendGoal_Response__Sequence
{
  action_tutorials_interfaces__action__Offboard_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_tutorials_interfaces__action__Offboard_GetResult_Request;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_GetResult_Request.
typedef struct action_tutorials_interfaces__action__Offboard_GetResult_Request__Sequence
{
  action_tutorials_interfaces__action__Offboard_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_tutorials_interfaces/action/detail/offboard__struct.h"

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_GetResult_Response
{
  int8_t status;
  action_tutorials_interfaces__action__Offboard_Result result;
} action_tutorials_interfaces__action__Offboard_GetResult_Response;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_GetResult_Response.
typedef struct action_tutorials_interfaces__action__Offboard_GetResult_Response__Sequence
{
  action_tutorials_interfaces__action__Offboard_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_tutorials_interfaces/action/detail/offboard__struct.h"

/// Struct defined in action/Offboard in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Offboard_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_tutorials_interfaces__action__Offboard_Feedback feedback;
} action_tutorials_interfaces__action__Offboard_FeedbackMessage;

// Struct for a sequence of action_tutorials_interfaces__action__Offboard_FeedbackMessage.
typedef struct action_tutorials_interfaces__action__Offboard_FeedbackMessage__Sequence
{
  action_tutorials_interfaces__action__Offboard_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Offboard_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__OFFBOARD__STRUCT_H_
