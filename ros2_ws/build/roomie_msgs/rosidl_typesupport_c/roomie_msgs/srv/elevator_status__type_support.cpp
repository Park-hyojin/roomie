// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from roomie_msgs:srv/ElevatorStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roomie_msgs/srv/detail/elevator_status__struct.h"
#include "roomie_msgs/srv/detail/elevator_status__type_support.h"
#include "roomie_msgs/srv/detail/elevator_status__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_Request_type_support_ids_t;

static const _ElevatorStatus_Request_type_support_ids_t _ElevatorStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorStatus_Request_type_support_symbol_names_t _ElevatorStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, ElevatorStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, ElevatorStatus_Request)),
  }
};

typedef struct _ElevatorStatus_Request_type_support_data_t
{
  void * data[2];
} _ElevatorStatus_Request_type_support_data_t;

static _ElevatorStatus_Request_type_support_data_t _ElevatorStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorStatus_Request_message_typesupport_map = {
  2,
  "roomie_msgs",
  &_ElevatorStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorStatus_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roomie_msgs__srv__ElevatorStatus_Request__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus_Request__get_type_description,
  &roomie_msgs__srv__ElevatorStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, ElevatorStatus_Request)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::ElevatorStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__type_support.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__functions.h"
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

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_Response_type_support_ids_t;

static const _ElevatorStatus_Response_type_support_ids_t _ElevatorStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorStatus_Response_type_support_symbol_names_t _ElevatorStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, ElevatorStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, ElevatorStatus_Response)),
  }
};

typedef struct _ElevatorStatus_Response_type_support_data_t
{
  void * data[2];
} _ElevatorStatus_Response_type_support_data_t;

static _ElevatorStatus_Response_type_support_data_t _ElevatorStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorStatus_Response_message_typesupport_map = {
  2,
  "roomie_msgs",
  &_ElevatorStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorStatus_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roomie_msgs__srv__ElevatorStatus_Response__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus_Response__get_type_description,
  &roomie_msgs__srv__ElevatorStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, ElevatorStatus_Response)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::ElevatorStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__type_support.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__functions.h"
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

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ElevatorStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_Event_type_support_ids_t;

static const _ElevatorStatus_Event_type_support_ids_t _ElevatorStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorStatus_Event_type_support_symbol_names_t _ElevatorStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, ElevatorStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, ElevatorStatus_Event)),
  }
};

typedef struct _ElevatorStatus_Event_type_support_data_t
{
  void * data[2];
} _ElevatorStatus_Event_type_support_data_t;

static _ElevatorStatus_Event_type_support_data_t _ElevatorStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorStatus_Event_message_typesupport_map = {
  2,
  "roomie_msgs",
  &_ElevatorStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ElevatorStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ElevatorStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ElevatorStatus_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roomie_msgs__srv__ElevatorStatus_Event__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus_Event__get_type_description,
  &roomie_msgs__srv__ElevatorStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, ElevatorStatus_Event)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::ElevatorStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ElevatorStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_type_support_ids_t;

static const _ElevatorStatus_type_support_ids_t _ElevatorStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ElevatorStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ElevatorStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ElevatorStatus_type_support_symbol_names_t _ElevatorStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, ElevatorStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, ElevatorStatus)),
  }
};

typedef struct _ElevatorStatus_type_support_data_t
{
  void * data[2];
} _ElevatorStatus_type_support_data_t;

static _ElevatorStatus_type_support_data_t _ElevatorStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ElevatorStatus_service_typesupport_map = {
  2,
  "roomie_msgs",
  &_ElevatorStatus_service_typesupport_ids.typesupport_identifier[0],
  &_ElevatorStatus_service_typesupport_symbol_names.symbol_name[0],
  &_ElevatorStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ElevatorStatus_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ElevatorStatus_Request_message_type_support_handle,
  &ElevatorStatus_Response_message_type_support_handle,
  &ElevatorStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roomie_msgs,
    srv,
    ElevatorStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roomie_msgs,
    srv,
    ElevatorStatus
  ),
  &roomie_msgs__srv__ElevatorStatus__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus__get_type_description,
  &roomie_msgs__srv__ElevatorStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, ElevatorStatus)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::ElevatorStatus_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
