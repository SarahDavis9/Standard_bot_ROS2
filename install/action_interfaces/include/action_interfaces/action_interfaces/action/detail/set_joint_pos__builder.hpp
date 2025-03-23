// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_interfaces:action/SetJointPos.idl
// generated code does not contain a copyright notice

#ifndef ACTION_INTERFACES__ACTION__DETAIL__SET_JOINT_POS__BUILDER_HPP_
#define ACTION_INTERFACES__ACTION__DETAIL__SET_JOINT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_interfaces/action/detail/set_joint_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_Goal_joint6
{
public:
  explicit Init_SetJointPos_Goal_joint6(::action_interfaces::action::SetJointPos_Goal & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetJointPos_Goal joint6(::action_interfaces::action::SetJointPos_Goal::_joint6_type arg)
  {
    msg_.joint6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Goal msg_;
};

class Init_SetJointPos_Goal_joint5
{
public:
  explicit Init_SetJointPos_Goal_joint5(::action_interfaces::action::SetJointPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetJointPos_Goal_joint6 joint5(::action_interfaces::action::SetJointPos_Goal::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return Init_SetJointPos_Goal_joint6(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Goal msg_;
};

class Init_SetJointPos_Goal_joint4
{
public:
  explicit Init_SetJointPos_Goal_joint4(::action_interfaces::action::SetJointPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetJointPos_Goal_joint5 joint4(::action_interfaces::action::SetJointPos_Goal::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_SetJointPos_Goal_joint5(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Goal msg_;
};

class Init_SetJointPos_Goal_joint3
{
public:
  explicit Init_SetJointPos_Goal_joint3(::action_interfaces::action::SetJointPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetJointPos_Goal_joint4 joint3(::action_interfaces::action::SetJointPos_Goal::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_SetJointPos_Goal_joint4(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Goal msg_;
};

class Init_SetJointPos_Goal_joint2
{
public:
  explicit Init_SetJointPos_Goal_joint2(::action_interfaces::action::SetJointPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetJointPos_Goal_joint3 joint2(::action_interfaces::action::SetJointPos_Goal::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_SetJointPos_Goal_joint3(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Goal msg_;
};

class Init_SetJointPos_Goal_joint1
{
public:
  Init_SetJointPos_Goal_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPos_Goal_joint2 joint1(::action_interfaces::action::SetJointPos_Goal::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_SetJointPos_Goal_joint2(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_Goal>()
{
  return action_interfaces::action::builder::Init_SetJointPos_Goal_joint1();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_Result_success
{
public:
  Init_SetJointPos_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::SetJointPos_Result success(::action_interfaces::action::SetJointPos_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_Result>()
{
  return action_interfaces::action::builder::Init_SetJointPos_Result_success();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_Feedback_distance_left
{
public:
  Init_SetJointPos_Feedback_distance_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::SetJointPos_Feedback distance_left(::action_interfaces::action::SetJointPos_Feedback::_distance_left_type arg)
  {
    msg_.distance_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_Feedback>()
{
  return action_interfaces::action::builder::Init_SetJointPos_Feedback_distance_left();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_SendGoal_Request_goal
{
public:
  explicit Init_SetJointPos_SendGoal_Request_goal(::action_interfaces::action::SetJointPos_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetJointPos_SendGoal_Request goal(::action_interfaces::action::SetJointPos_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_SendGoal_Request msg_;
};

class Init_SetJointPos_SendGoal_Request_goal_id
{
public:
  Init_SetJointPos_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPos_SendGoal_Request_goal goal_id(::action_interfaces::action::SetJointPos_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetJointPos_SendGoal_Request_goal(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_SendGoal_Request>()
{
  return action_interfaces::action::builder::Init_SetJointPos_SendGoal_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_SendGoal_Response_stamp
{
public:
  explicit Init_SetJointPos_SendGoal_Response_stamp(::action_interfaces::action::SetJointPos_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetJointPos_SendGoal_Response stamp(::action_interfaces::action::SetJointPos_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_SendGoal_Response msg_;
};

class Init_SetJointPos_SendGoal_Response_accepted
{
public:
  Init_SetJointPos_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPos_SendGoal_Response_stamp accepted(::action_interfaces::action::SetJointPos_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetJointPos_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_SendGoal_Response>()
{
  return action_interfaces::action::builder::Init_SetJointPos_SendGoal_Response_accepted();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_GetResult_Request_goal_id
{
public:
  Init_SetJointPos_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::SetJointPos_GetResult_Request goal_id(::action_interfaces::action::SetJointPos_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_GetResult_Request>()
{
  return action_interfaces::action::builder::Init_SetJointPos_GetResult_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_GetResult_Response_result
{
public:
  explicit Init_SetJointPos_GetResult_Response_result(::action_interfaces::action::SetJointPos_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetJointPos_GetResult_Response result(::action_interfaces::action::SetJointPos_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_GetResult_Response msg_;
};

class Init_SetJointPos_GetResult_Response_status
{
public:
  Init_SetJointPos_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPos_GetResult_Response_result status(::action_interfaces::action::SetJointPos_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetJointPos_GetResult_Response_result(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_GetResult_Response>()
{
  return action_interfaces::action::builder::Init_SetJointPos_GetResult_Response_status();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetJointPos_FeedbackMessage_feedback
{
public:
  explicit Init_SetJointPos_FeedbackMessage_feedback(::action_interfaces::action::SetJointPos_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetJointPos_FeedbackMessage feedback(::action_interfaces::action::SetJointPos_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_FeedbackMessage msg_;
};

class Init_SetJointPos_FeedbackMessage_goal_id
{
public:
  Init_SetJointPos_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPos_FeedbackMessage_feedback goal_id(::action_interfaces::action::SetJointPos_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetJointPos_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_interfaces::action::SetJointPos_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetJointPos_FeedbackMessage>()
{
  return action_interfaces::action::builder::Init_SetJointPos_FeedbackMessage_goal_id();
}

}  // namespace action_interfaces

#endif  // ACTION_INTERFACES__ACTION__DETAIL__SET_JOINT_POS__BUILDER_HPP_
