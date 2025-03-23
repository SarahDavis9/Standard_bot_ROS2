// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from action_interfaces:action/SetJointPos.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "action_interfaces/action/detail/set_joint_pos__struct.h"
#include "action_interfaces/action/detail/set_joint_pos__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_Goal_type_support_ids_t;

static const _SetJointPos_Goal_type_support_ids_t _SetJointPos_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_Goal_type_support_symbol_names_t _SetJointPos_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_Goal)),
  }
};

typedef struct _SetJointPos_Goal_type_support_data_t
{
  void * data[2];
} _SetJointPos_Goal_type_support_data_t;

static _SetJointPos_Goal_type_support_data_t _SetJointPos_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_Goal_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_Goal)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_Result_type_support_ids_t;

static const _SetJointPos_Result_type_support_ids_t _SetJointPos_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_Result_type_support_symbol_names_t _SetJointPos_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_Result)),
  }
};

typedef struct _SetJointPos_Result_type_support_data_t
{
  void * data[2];
} _SetJointPos_Result_type_support_data_t;

static _SetJointPos_Result_type_support_data_t _SetJointPos_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_Result_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_Result)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_Feedback_type_support_ids_t;

static const _SetJointPos_Feedback_type_support_ids_t _SetJointPos_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_Feedback_type_support_symbol_names_t _SetJointPos_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_Feedback)),
  }
};

typedef struct _SetJointPos_Feedback_type_support_data_t
{
  void * data[2];
} _SetJointPos_Feedback_type_support_data_t;

static _SetJointPos_Feedback_type_support_data_t _SetJointPos_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_Feedback_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_Feedback)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_SendGoal_Request_type_support_ids_t;

static const _SetJointPos_SendGoal_Request_type_support_ids_t _SetJointPos_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_SendGoal_Request_type_support_symbol_names_t _SetJointPos_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_SendGoal_Request)),
  }
};

typedef struct _SetJointPos_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetJointPos_SendGoal_Request_type_support_data_t;

static _SetJointPos_SendGoal_Request_type_support_data_t _SetJointPos_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_SendGoal_Request_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_SendGoal_Request)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_SendGoal_Response_type_support_ids_t;

static const _SetJointPos_SendGoal_Response_type_support_ids_t _SetJointPos_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_SendGoal_Response_type_support_symbol_names_t _SetJointPos_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_SendGoal_Response)),
  }
};

typedef struct _SetJointPos_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetJointPos_SendGoal_Response_type_support_data_t;

static _SetJointPos_SendGoal_Response_type_support_data_t _SetJointPos_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_SendGoal_Response_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_SendGoal_Response)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_SendGoal_type_support_ids_t;

static const _SetJointPos_SendGoal_type_support_ids_t _SetJointPos_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_SendGoal_type_support_symbol_names_t _SetJointPos_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_SendGoal)),
  }
};

typedef struct _SetJointPos_SendGoal_type_support_data_t
{
  void * data[2];
} _SetJointPos_SendGoal_type_support_data_t;

static _SetJointPos_SendGoal_type_support_data_t _SetJointPos_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_SendGoal_service_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointPos_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_SendGoal)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_GetResult_Request_type_support_ids_t;

static const _SetJointPos_GetResult_Request_type_support_ids_t _SetJointPos_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_GetResult_Request_type_support_symbol_names_t _SetJointPos_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_GetResult_Request)),
  }
};

typedef struct _SetJointPos_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetJointPos_GetResult_Request_type_support_data_t;

static _SetJointPos_GetResult_Request_type_support_data_t _SetJointPos_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_GetResult_Request_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_GetResult_Request)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_GetResult_Response_type_support_ids_t;

static const _SetJointPos_GetResult_Response_type_support_ids_t _SetJointPos_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_GetResult_Response_type_support_symbol_names_t _SetJointPos_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_GetResult_Response)),
  }
};

typedef struct _SetJointPos_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetJointPos_GetResult_Response_type_support_data_t;

static _SetJointPos_GetResult_Response_type_support_data_t _SetJointPos_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_GetResult_Response_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_GetResult_Response)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_GetResult_type_support_ids_t;

static const _SetJointPos_GetResult_type_support_ids_t _SetJointPos_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_GetResult_type_support_symbol_names_t _SetJointPos_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_GetResult)),
  }
};

typedef struct _SetJointPos_GetResult_type_support_data_t
{
  void * data[2];
} _SetJointPos_GetResult_type_support_data_t;

static _SetJointPos_GetResult_type_support_data_t _SetJointPos_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_GetResult_service_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointPos_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_GetResult)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__struct.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace action_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointPos_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointPos_FeedbackMessage_type_support_ids_t;

static const _SetJointPos_FeedbackMessage_type_support_ids_t _SetJointPos_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointPos_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointPos_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointPos_FeedbackMessage_type_support_symbol_names_t _SetJointPos_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_interfaces, action, SetJointPos_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_interfaces, action, SetJointPos_FeedbackMessage)),
  }
};

typedef struct _SetJointPos_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetJointPos_FeedbackMessage_type_support_data_t;

static _SetJointPos_FeedbackMessage_type_support_data_t _SetJointPos_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointPos_FeedbackMessage_message_typesupport_map = {
  2,
  "action_interfaces",
  &_SetJointPos_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointPos_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointPos_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointPos_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointPos_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace action_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_interfaces, action, SetJointPos_FeedbackMessage)() {
  return &::action_interfaces::action::rosidl_typesupport_c::SetJointPos_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "action_interfaces/action/set_joint_pos.h"
// already included above
// #include "action_interfaces/action/detail/set_joint_pos__type_support.h"

static rosidl_action_type_support_t _action_interfaces__action__SetJointPos__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, action_interfaces, action, SetJointPos)()
{
  // Thread-safe by always writing the same values to the static struct
  _action_interfaces__action__SetJointPos__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_interfaces, action, SetJointPos_SendGoal)();
  _action_interfaces__action__SetJointPos__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_interfaces, action, SetJointPos_GetResult)();
  _action_interfaces__action__SetJointPos__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _action_interfaces__action__SetJointPos__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_interfaces, action, SetJointPos_FeedbackMessage)();
  _action_interfaces__action__SetJointPos__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_action_interfaces__action__SetJointPos__typesupport_c;
}

#ifdef __cplusplus
}
#endif
