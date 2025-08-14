// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomie_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#include "roomie_msgs/msg/detail/robot_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomie_msgs
const rosidl_type_hash_t *
roomie_msgs__msg__RobotState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0xd5, 0xf5, 0x46, 0xc8, 0xfb, 0xa1, 0x04,
      0x0a, 0xd1, 0x5a, 0xe5, 0xbc, 0xef, 0x09, 0x0a,
      0xa0, 0x3a, 0x22, 0x6e, 0x2c, 0x77, 0xb4, 0xe2,
      0x84, 0xa0, 0x27, 0x0f, 0xa7, 0x69, 0x9f, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomie_msgs__msg__RobotState__TYPE_NAME[] = "roomie_msgs/msg/RobotState";

// Define type names, field names, and default values
static char roomie_msgs__msg__RobotState__FIELD_NAME__robot_id[] = "robot_id";
static char roomie_msgs__msg__RobotState__FIELD_NAME__robot_state_id[] = "robot_state_id";

static rosidl_runtime_c__type_description__Field roomie_msgs__msg__RobotState__FIELDS[] = {
  {
    {roomie_msgs__msg__RobotState__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__RobotState__FIELD_NAME__robot_state_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomie_msgs__msg__RobotState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomie_msgs__msg__RobotState__TYPE_NAME, 26, 26},
      {roomie_msgs__msg__RobotState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RobotState.msg\n"
  "int32 robot_id\n"
  "int32 robot_state_id\n"
  "\n"
  "# robot_state_id values:\n"
  "# 0: \\xec\\xb4\\x88\\xea\\xb8\\xb0\\xed\\x99\\x94  \n"
  "# 1: \\xec\\xb6\\xa9\\xec\\xa0\\x84\\xec\\x83\\x81\\xed\\x83\\x9c  \n"
  "# 2: \\xec\\x9e\\x91\\xec\\x97\\x85\\xeb\\x8c\\x80\\xea\\xb8\\xb0  \n"
  "# 10: \\xed\\x94\\xbd\\xec\\x97\\x85\\xec\\x9c\\x84\\xec\\xb9\\x98 \\xec\\x9d\\xb4\\xeb\\x8f\\x99  \n"
  "# 11: \\xed\\x94\\xbd\\xec\\x97\\x85\\xeb\\x8c\\x80\\xea\\xb8\\xb0  \n"
  "# 12: \\xeb\\xb0\\xb0\\xec\\x86\\xa1\\xec\\x9e\\xa5\\xec\\x86\\x8c \\xec\\x9d\\xb4\\xeb\\x8f\\x99  \n"
  "# 13: \\xec\\x88\\x98\\xeb\\xa0\\xb9\\xeb\\x8c\\x80\\xea\\xb8\\xb0  \n"
  "# 20: \\xed\\x98\\xb8\\xec\\xb6\\x9c\\xec\\x9c\\x84\\xec\\xb9\\x98 \\xec\\x9d\\xb4\\xeb\\x8f\\x99  \n"
  "# 21: \\xea\\xb8\\xb8\\xec\\x95\\x88\\xeb\\x82\\xb4 \\xeb\\xaa\\xa9\\xec\\xa0\\x81\\xec\\xa7\\x80 \\xec\\x9e\\x85\\xeb\\xa0\\xa5\\xeb\\x8c\\x80\\xea\\xb8\\xb0 \n"
  "# 22: \\xea\\xb8\\xb8\\xec\\x95\\x88\\xeb\\x82\\xb4 \\xec\\x9d\\xb4\\xeb\\x8f\\x99  \n"
  "# 23: \\xeb\\x8c\\x80\\xec\\x83\\x81 \\xed\\x83\\x90\\xec\\x83\\x89  \n"
  "# 30: \\xeb\\x8c\\x80\\xea\\xb8\\xb0\\xec\\x9c\\x84\\xec\\xb9\\x98\\xeb\\xa1\\x9c \\xec\\x9d\\xb4\\xeb\\x8f\\x99  \n"
  "# 31: \\xec\\x97\\x98\\xeb\\xa6\\xac\\xeb\\xb2\\xa0\\xec\\x9d\\xb4\\xed\\x84\\xb0 \\xed\\x83\\x91\\xec\\x8a\\xb9  \n"
  "\n"
  "# 90: \\xec\\x98\\xa4\\xeb\\xa5\\x98  ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomie_msgs__msg__RobotState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomie_msgs__msg__RobotState__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 282, 282},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomie_msgs__msg__RobotState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomie_msgs__msg__RobotState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
