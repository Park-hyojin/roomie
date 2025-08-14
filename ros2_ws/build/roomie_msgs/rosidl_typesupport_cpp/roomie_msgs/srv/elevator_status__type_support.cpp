// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from roomie_msgs:srv/ElevatorStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roomie_msgs/srv/detail/elevator_status__functions.h"
#include "roomie_msgs/srv/detail/elevator_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ElevatorStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_Request_type_support_ids_t;

static const _ElevatorStatus_Request_type_support_ids_t _ElevatorStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomie_msgs, srv, ElevatorStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomie_msgs, srv, ElevatorStatus_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomie_msgs__srv__ElevatorStatus_Request__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus_Request__get_type_description,
  &roomie_msgs__srv__ElevatorStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomie_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Request>()
{
  return &::roomie_msgs::srv::rosidl_typesupport_cpp::ElevatorStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomie_msgs, srv, ElevatorStatus_Request)() {
  return get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__functions.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ElevatorStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_Response_type_support_ids_t;

static const _ElevatorStatus_Response_type_support_ids_t _ElevatorStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomie_msgs, srv, ElevatorStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomie_msgs, srv, ElevatorStatus_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomie_msgs__srv__ElevatorStatus_Response__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus_Response__get_type_description,
  &roomie_msgs__srv__ElevatorStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomie_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Response>()
{
  return &::roomie_msgs::srv::rosidl_typesupport_cpp::ElevatorStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomie_msgs, srv, ElevatorStatus_Response)() {
  return get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__functions.h"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ElevatorStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_Event_type_support_ids_t;

static const _ElevatorStatus_Event_type_support_ids_t _ElevatorStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomie_msgs, srv, ElevatorStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomie_msgs, srv, ElevatorStatus_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &roomie_msgs__srv__ElevatorStatus_Event__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus_Event__get_type_description,
  &roomie_msgs__srv__ElevatorStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomie_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Event>()
{
  return &::roomie_msgs::srv::rosidl_typesupport_cpp::ElevatorStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, roomie_msgs, srv, ElevatorStatus_Event)() {
  return get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "roomie_msgs/srv/detail/elevator_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace roomie_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ElevatorStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ElevatorStatus_type_support_ids_t;

static const _ElevatorStatus_type_support_ids_t _ElevatorStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roomie_msgs, srv, ElevatorStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roomie_msgs, srv, ElevatorStatus)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ElevatorStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<roomie_msgs::srv::ElevatorStatus_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<roomie_msgs::srv::ElevatorStatus>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<roomie_msgs::srv::ElevatorStatus>,
  &roomie_msgs__srv__ElevatorStatus__get_type_hash,
  &roomie_msgs__srv__ElevatorStatus__get_type_description,
  &roomie_msgs__srv__ElevatorStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace roomie_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<roomie_msgs::srv::ElevatorStatus>()
{
  return &::roomie_msgs::srv::rosidl_typesupport_cpp::ElevatorStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, roomie_msgs, srv, ElevatorStatus)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<roomie_msgs::srv::ElevatorStatus>();
}

#ifdef __cplusplus
}
#endif
