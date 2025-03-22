// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_interfaces:action/SetJointPos.idl
// generated code does not contain a copyright notice

#ifndef ACTION_INTERFACES__ACTION__DETAIL__SET_JOINT_POS__TRAITS_HPP_
#define ACTION_INTERFACES__ACTION__DETAIL__SET_JOINT_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "action_interfaces/action/detail/set_joint_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1
  {
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint4
  {
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << ", ";
  }

  // member: joint5
  {
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
    out << ", ";
  }

  // member: joint6
  {
    out << "joint6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointPos_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << "\n";
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << "\n";
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << "\n";
  }

  // member: joint4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << "\n";
  }

  // member: joint5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
    out << "\n";
  }

  // member: joint6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointPos_Goal & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_Goal & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_Goal>()
{
  return "action_interfaces::action::SetJointPos_Goal";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_Goal>()
{
  return "action_interfaces/action/SetJointPos_Goal";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointPos_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointPos_Result & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_Result & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_Result>()
{
  return "action_interfaces::action::SetJointPos_Result";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_Result>()
{
  return "action_interfaces/action/SetJointPos_Result";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_left
  {
    if (msg.distance_left.size() == 0) {
      out << "distance_left: []";
    } else {
      out << "distance_left: [";
      size_t pending_items = msg.distance_left.size();
      for (auto item : msg.distance_left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointPos_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distance_left.size() == 0) {
      out << "distance_left: []\n";
    } else {
      out << "distance_left:\n";
      for (auto item : msg.distance_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointPos_Feedback & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_Feedback & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_Feedback>()
{
  return "action_interfaces::action::SetJointPos_Feedback";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_Feedback>()
{
  return "action_interfaces/action/SetJointPos_Feedback";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "action_interfaces/action/detail/set_joint_pos__traits.hpp"

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_SendGoal_Request & msg,
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
  const SetJointPos_SendGoal_Request & msg,
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

inline std::string to_yaml(const SetJointPos_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_SendGoal_Request & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_SendGoal_Request>()
{
  return "action_interfaces::action::SetJointPos_SendGoal_Request";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_SendGoal_Request>()
{
  return "action_interfaces/action/SetJointPos_SendGoal_Request";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_interfaces::action::SetJointPos_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_interfaces::action::SetJointPos_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_SendGoal_Response & msg,
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
  const SetJointPos_SendGoal_Response & msg,
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

inline std::string to_yaml(const SetJointPos_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_SendGoal_Response & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_SendGoal_Response>()
{
  return "action_interfaces::action::SetJointPos_SendGoal_Response";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_SendGoal_Response>()
{
  return "action_interfaces/action/SetJointPos_SendGoal_Response";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_SendGoal>()
{
  return "action_interfaces::action::SetJointPos_SendGoal";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_SendGoal>()
{
  return "action_interfaces/action/SetJointPos_SendGoal";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_interfaces::action::SetJointPos_SendGoal_Request>::value &&
    has_fixed_size<action_interfaces::action::SetJointPos_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_interfaces::action::SetJointPos_SendGoal_Request>::value &&
    has_bounded_size<action_interfaces::action::SetJointPos_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_interfaces::action::SetJointPos_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_interfaces::action::SetJointPos_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_interfaces::action::SetJointPos_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_GetResult_Request & msg,
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
  const SetJointPos_GetResult_Request & msg,
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

inline std::string to_yaml(const SetJointPos_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_GetResult_Request & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_GetResult_Request>()
{
  return "action_interfaces::action::SetJointPos_GetResult_Request";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_GetResult_Request>()
{
  return "action_interfaces/action/SetJointPos_GetResult_Request";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__traits.hpp"

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_GetResult_Response & msg,
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
  const SetJointPos_GetResult_Response & msg,
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

inline std::string to_yaml(const SetJointPos_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_GetResult_Response & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_GetResult_Response>()
{
  return "action_interfaces::action::SetJointPos_GetResult_Response";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_GetResult_Response>()
{
  return "action_interfaces/action/SetJointPos_GetResult_Response";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_interfaces::action::SetJointPos_Result>::value> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_interfaces::action::SetJointPos_Result>::value> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_GetResult>()
{
  return "action_interfaces::action::SetJointPos_GetResult";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_GetResult>()
{
  return "action_interfaces/action/SetJointPos_GetResult";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_interfaces::action::SetJointPos_GetResult_Request>::value &&
    has_fixed_size<action_interfaces::action::SetJointPos_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_interfaces::action::SetJointPos_GetResult_Request>::value &&
    has_bounded_size<action_interfaces::action::SetJointPos_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_interfaces::action::SetJointPos_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_interfaces::action::SetJointPos_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_interfaces::action::SetJointPos_GetResult_Response>
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
// #include "action_interfaces/action/detail/set_joint_pos__traits.hpp"

namespace action_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetJointPos_FeedbackMessage & msg,
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
  const SetJointPos_FeedbackMessage & msg,
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

inline std::string to_yaml(const SetJointPos_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use action_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_interfaces::action::SetJointPos_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const action_interfaces::action::SetJointPos_FeedbackMessage & msg)
{
  return action_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<action_interfaces::action::SetJointPos_FeedbackMessage>()
{
  return "action_interfaces::action::SetJointPos_FeedbackMessage";
}

template<>
inline const char * name<action_interfaces::action::SetJointPos_FeedbackMessage>()
{
  return "action_interfaces/action/SetJointPos_FeedbackMessage";
}

template<>
struct has_fixed_size<action_interfaces::action::SetJointPos_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_interfaces::action::SetJointPos_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_interfaces::action::SetJointPos_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_interfaces::action::SetJointPos_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_interfaces::action::SetJointPos_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_interfaces::action::SetJointPos>
  : std::true_type
{
};

template<>
struct is_action_goal<action_interfaces::action::SetJointPos_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_interfaces::action::SetJointPos_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_interfaces::action::SetJointPos_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_INTERFACES__ACTION__DETAIL__SET_JOINT_POS__TRAITS_HPP_
