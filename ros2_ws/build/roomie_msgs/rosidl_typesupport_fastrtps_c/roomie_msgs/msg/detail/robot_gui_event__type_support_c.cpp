// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roomie_msgs:msg/RobotGuiEvent.idl
// generated code does not contain a copyright notice
#include "roomie_msgs/msg/detail/robot_gui_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roomie_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roomie_msgs/msg/detail/robot_gui_event__struct.h"
#include "roomie_msgs/msg/detail/robot_gui_event__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp
#include "rosidl_runtime_c/string.h"  // detail
#include "rosidl_runtime_c/string_functions.h"  // detail

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_roomie_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _RobotGuiEvent__ros_msg_type = roomie_msgs__msg__RobotGuiEvent;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
bool cdr_serialize_roomie_msgs__msg__RobotGuiEvent(
  const roomie_msgs__msg__RobotGuiEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: rgui_event_id
  {
    cdr << ros_message->rgui_event_id;
  }

  // Field name: task_id
  {
    cdr << ros_message->task_id;
  }

  // Field name: timestamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->timestamp, cdr);
  }

  // Field name: detail
  {
    const rosidl_runtime_c__String * str = &ros_message->detail;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
bool cdr_deserialize_roomie_msgs__msg__RobotGuiEvent(
  eprosima::fastcdr::Cdr & cdr,
  roomie_msgs__msg__RobotGuiEvent * ros_message)
{
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: rgui_event_id
  {
    cdr >> ros_message->rgui_event_id;
  }

  // Field name: task_id
  {
    cdr >> ros_message->task_id;
  }

  // Field name: timestamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->timestamp);
  }

  // Field name: detail
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->detail.data) {
      rosidl_runtime_c__String__init(&ros_message->detail);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->detail,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'detail'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
size_t get_serialized_size_roomie_msgs__msg__RobotGuiEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotGuiEvent__ros_msg_type * ros_message = static_cast<const _RobotGuiEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rgui_event_id
  {
    size_t item_size = sizeof(ros_message->rgui_event_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: task_id
  {
    size_t item_size = sizeof(ros_message->task_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timestamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);

  // Field name: detail
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->detail.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
size_t max_serialized_size_roomie_msgs__msg__RobotGuiEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rgui_event_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: task_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detail
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomie_msgs__msg__RobotGuiEvent;
    is_plain =
      (
      offsetof(DataType, detail) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
bool cdr_serialize_key_roomie_msgs__msg__RobotGuiEvent(
  const roomie_msgs__msg__RobotGuiEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: rgui_event_id
  {
    cdr << ros_message->rgui_event_id;
  }

  // Field name: task_id
  {
    cdr << ros_message->task_id;
  }

  // Field name: timestamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->timestamp, cdr);
  }

  // Field name: detail
  {
    const rosidl_runtime_c__String * str = &ros_message->detail;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
size_t get_serialized_size_key_roomie_msgs__msg__RobotGuiEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotGuiEvent__ros_msg_type * ros_message = static_cast<const _RobotGuiEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rgui_event_id
  {
    size_t item_size = sizeof(ros_message->rgui_event_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: task_id
  {
    size_t item_size = sizeof(ros_message->task_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timestamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);

  // Field name: detail
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->detail.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roomie_msgs
size_t max_serialized_size_key_roomie_msgs__msg__RobotGuiEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rgui_event_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: task_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detail
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roomie_msgs__msg__RobotGuiEvent;
    is_plain =
      (
      offsetof(DataType, detail) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotGuiEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const roomie_msgs__msg__RobotGuiEvent * ros_message = static_cast<const roomie_msgs__msg__RobotGuiEvent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_roomie_msgs__msg__RobotGuiEvent(ros_message, cdr);
}

static bool _RobotGuiEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  roomie_msgs__msg__RobotGuiEvent * ros_message = static_cast<roomie_msgs__msg__RobotGuiEvent *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_roomie_msgs__msg__RobotGuiEvent(cdr, ros_message);
}

static uint32_t _RobotGuiEvent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roomie_msgs__msg__RobotGuiEvent(
      untyped_ros_message, 0));
}

static size_t _RobotGuiEvent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roomie_msgs__msg__RobotGuiEvent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotGuiEvent = {
  "roomie_msgs::msg",
  "RobotGuiEvent",
  _RobotGuiEvent__cdr_serialize,
  _RobotGuiEvent__cdr_deserialize,
  _RobotGuiEvent__get_serialized_size,
  _RobotGuiEvent__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotGuiEvent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotGuiEvent,
  get_message_typesupport_handle_function,
  &roomie_msgs__msg__RobotGuiEvent__get_type_hash,
  &roomie_msgs__msg__RobotGuiEvent__get_type_description,
  &roomie_msgs__msg__RobotGuiEvent__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roomie_msgs, msg, RobotGuiEvent)() {
  return &_RobotGuiEvent__type_support;
}

#if defined(__cplusplus)
}
#endif
