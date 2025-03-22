// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_interfaces:action/SetCartPos.idl
// generated code does not contain a copyright notice

#ifndef ACTION_INTERFACES__ACTION__DETAIL__SET_CART_POS__BUILDER_HPP_
#define ACTION_INTERFACES__ACTION__DETAIL__SET_CART_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_interfaces/action/detail/set_cart_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_Goal_q_w
{
public:
  explicit Init_SetCartPos_Goal_q_w(::action_interfaces::action::SetCartPos_Goal & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetCartPos_Goal q_w(::action_interfaces::action::SetCartPos_Goal::_q_w_type arg)
  {
    msg_.q_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

class Init_SetCartPos_Goal_q_z
{
public:
  explicit Init_SetCartPos_Goal_q_z(::action_interfaces::action::SetCartPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetCartPos_Goal_q_w q_z(::action_interfaces::action::SetCartPos_Goal::_q_z_type arg)
  {
    msg_.q_z = std::move(arg);
    return Init_SetCartPos_Goal_q_w(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

class Init_SetCartPos_Goal_q_y
{
public:
  explicit Init_SetCartPos_Goal_q_y(::action_interfaces::action::SetCartPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetCartPos_Goal_q_z q_y(::action_interfaces::action::SetCartPos_Goal::_q_y_type arg)
  {
    msg_.q_y = std::move(arg);
    return Init_SetCartPos_Goal_q_z(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

class Init_SetCartPos_Goal_q_x
{
public:
  explicit Init_SetCartPos_Goal_q_x(::action_interfaces::action::SetCartPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetCartPos_Goal_q_y q_x(::action_interfaces::action::SetCartPos_Goal::_q_x_type arg)
  {
    msg_.q_x = std::move(arg);
    return Init_SetCartPos_Goal_q_y(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

class Init_SetCartPos_Goal_z
{
public:
  explicit Init_SetCartPos_Goal_z(::action_interfaces::action::SetCartPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetCartPos_Goal_q_x z(::action_interfaces::action::SetCartPos_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SetCartPos_Goal_q_x(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

class Init_SetCartPos_Goal_y
{
public:
  explicit Init_SetCartPos_Goal_y(::action_interfaces::action::SetCartPos_Goal & msg)
  : msg_(msg)
  {}
  Init_SetCartPos_Goal_z y(::action_interfaces::action::SetCartPos_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SetCartPos_Goal_z(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

class Init_SetCartPos_Goal_x
{
public:
  Init_SetCartPos_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCartPos_Goal_y x(::action_interfaces::action::SetCartPos_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetCartPos_Goal_y(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_Goal>()
{
  return action_interfaces::action::builder::Init_SetCartPos_Goal_x();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_Result_success
{
public:
  Init_SetCartPos_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::SetCartPos_Result success(::action_interfaces::action::SetCartPos_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_Result>()
{
  return action_interfaces::action::builder::Init_SetCartPos_Result_success();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_Feedback_distance_left
{
public:
  Init_SetCartPos_Feedback_distance_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::SetCartPos_Feedback distance_left(::action_interfaces::action::SetCartPos_Feedback::_distance_left_type arg)
  {
    msg_.distance_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_Feedback>()
{
  return action_interfaces::action::builder::Init_SetCartPos_Feedback_distance_left();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_SendGoal_Request_goal
{
public:
  explicit Init_SetCartPos_SendGoal_Request_goal(::action_interfaces::action::SetCartPos_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetCartPos_SendGoal_Request goal(::action_interfaces::action::SetCartPos_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_SendGoal_Request msg_;
};

class Init_SetCartPos_SendGoal_Request_goal_id
{
public:
  Init_SetCartPos_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCartPos_SendGoal_Request_goal goal_id(::action_interfaces::action::SetCartPos_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetCartPos_SendGoal_Request_goal(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_SendGoal_Request>()
{
  return action_interfaces::action::builder::Init_SetCartPos_SendGoal_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_SendGoal_Response_stamp
{
public:
  explicit Init_SetCartPos_SendGoal_Response_stamp(::action_interfaces::action::SetCartPos_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetCartPos_SendGoal_Response stamp(::action_interfaces::action::SetCartPos_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_SendGoal_Response msg_;
};

class Init_SetCartPos_SendGoal_Response_accepted
{
public:
  Init_SetCartPos_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCartPos_SendGoal_Response_stamp accepted(::action_interfaces::action::SetCartPos_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetCartPos_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_SendGoal_Response>()
{
  return action_interfaces::action::builder::Init_SetCartPos_SendGoal_Response_accepted();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_GetResult_Request_goal_id
{
public:
  Init_SetCartPos_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_interfaces::action::SetCartPos_GetResult_Request goal_id(::action_interfaces::action::SetCartPos_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_GetResult_Request>()
{
  return action_interfaces::action::builder::Init_SetCartPos_GetResult_Request_goal_id();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_GetResult_Response_result
{
public:
  explicit Init_SetCartPos_GetResult_Response_result(::action_interfaces::action::SetCartPos_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetCartPos_GetResult_Response result(::action_interfaces::action::SetCartPos_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_GetResult_Response msg_;
};

class Init_SetCartPos_GetResult_Response_status
{
public:
  Init_SetCartPos_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCartPos_GetResult_Response_result status(::action_interfaces::action::SetCartPos_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetCartPos_GetResult_Response_result(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_GetResult_Response>()
{
  return action_interfaces::action::builder::Init_SetCartPos_GetResult_Response_status();
}

}  // namespace action_interfaces


namespace action_interfaces
{

namespace action
{

namespace builder
{

class Init_SetCartPos_FeedbackMessage_feedback
{
public:
  explicit Init_SetCartPos_FeedbackMessage_feedback(::action_interfaces::action::SetCartPos_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_interfaces::action::SetCartPos_FeedbackMessage feedback(::action_interfaces::action::SetCartPos_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_FeedbackMessage msg_;
};

class Init_SetCartPos_FeedbackMessage_goal_id
{
public:
  Init_SetCartPos_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCartPos_FeedbackMessage_feedback goal_id(::action_interfaces::action::SetCartPos_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetCartPos_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_interfaces::action::SetCartPos_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_interfaces::action::SetCartPos_FeedbackMessage>()
{
  return action_interfaces::action::builder::Init_SetCartPos_FeedbackMessage_goal_id();
}

}  // namespace action_interfaces

#endif  // ACTION_INTERFACES__ACTION__DETAIL__SET_CART_POS__BUILDER_HPP_
