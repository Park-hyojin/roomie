// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from roomie_msgs:srv/Location.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "roomie_msgs/srv/detail/location__struct.h"
#include "roomie_msgs/srv/detail/location__type_support.h"
#include "roomie_msgs/srv/detail/location__functions.h"
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

typedef struct _Location_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Location_Request_type_support_ids_t;

static const _Location_Request_type_support_ids_t _Location_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Location_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Location_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Location_Request_type_support_symbol_names_t _Location_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, Location_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, Location_Request)),
  }
};

typedef struct _Location_Request_type_support_data_t
{
  void * data[2];
} _Location_Request_type_support_data_t;

static _Location_Request_type_support_data_t _Location_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Location_Request_message_typesupport_map = {
  2,
  "roomie_msgs",
  &_Location_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Location_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Location_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Location_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Location_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roomie_msgs__srv__Location_Request__get_type_hash,
  &roomie_msgs__srv__Location_Request__get_type_description,
  &roomie_msgs__srv__Location_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, Location_Request)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::Location_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/location__struct.h"
// already included above
// #include "roomie_msgs/srv/detail/location__type_support.h"
// already included above
// #include "roomie_msgs/srv/detail/location__functions.h"
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

typedef struct _Location_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Location_Response_type_support_ids_t;

static const _Location_Response_type_support_ids_t _Location_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Location_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Location_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Location_Response_type_support_symbol_names_t _Location_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, Location_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, Location_Response)),
  }
};

typedef struct _Location_Response_type_support_data_t
{
  void * data[2];
} _Location_Response_type_support_data_t;

static _Location_Response_type_support_data_t _Location_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Location_Response_message_typesupport_map = {
  2,
  "roomie_msgs",
  &_Location_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Location_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Location_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Location_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Location_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roomie_msgs__srv__Location_Response__get_type_hash,
  &roomie_msgs__srv__Location_Response__get_type_description,
  &roomie_msgs__srv__Location_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, Location_Response)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::Location_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/location__struct.h"
// already included above
// #include "roomie_msgs/srv/detail/location__type_support.h"
// already included above
// #include "roomie_msgs/srv/detail/location__functions.h"
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

typedef struct _Location_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Location_Event_type_support_ids_t;

static const _Location_Event_type_support_ids_t _Location_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Location_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Location_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Location_Event_type_support_symbol_names_t _Location_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, Location_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, Location_Event)),
  }
};

typedef struct _Location_Event_type_support_data_t
{
  void * data[2];
} _Location_Event_type_support_data_t;

static _Location_Event_type_support_data_t _Location_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Location_Event_message_typesupport_map = {
  2,
  "roomie_msgs",
  &_Location_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Location_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Location_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Location_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Location_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &roomie_msgs__srv__Location_Event__get_type_hash,
  &roomie_msgs__srv__Location_Event__get_type_description,
  &roomie_msgs__srv__Location_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, Location_Event)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::Location_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roomie_msgs/srv/detail/location__type_support.h"
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
typedef struct _Location_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Location_type_support_ids_t;

static const _Location_type_support_ids_t _Location_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Location_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Location_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Location_type_support_symbol_names_t _Location_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, srv, Location)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roomie_msgs, srv, Location)),
  }
};

typedef struct _Location_type_support_data_t
{
  void * data[2];
} _Location_type_support_data_t;

static _Location_type_support_data_t _Location_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Location_service_typesupport_map = {
  2,
  "roomie_msgs",
  &_Location_service_typesupport_ids.typesupport_identifier[0],
  &_Location_service_typesupport_symbol_names.symbol_name[0],
  &_Location_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Location_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Location_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Location_Request_message_type_support_handle,
  &Location_Response_message_type_support_handle,
  &Location_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roomie_msgs,
    srv,
    Location
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    roomie_msgs,
    srv,
    Location
  ),
  &roomie_msgs__srv__Location__get_type_hash,
  &roomie_msgs__srv__Location__get_type_description,
  &roomie_msgs__srv__Location__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace roomie_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, roomie_msgs, srv, Location)() {
  return &::roomie_msgs::srv::rosidl_typesupport_c::Location_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
