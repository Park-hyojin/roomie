// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomie_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#include "roomie_msgs/msg/detail/obstacle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomie_msgs
const rosidl_type_hash_t *
roomie_msgs__msg__Obstacle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xbb, 0x3c, 0xff, 0x72, 0xf2, 0xcd, 0x18,
      0xd3, 0x8d, 0xab, 0x9f, 0x8f, 0xda, 0x99, 0x78,
      0x03, 0x36, 0xfb, 0x52, 0xe1, 0x99, 0x4e, 0xda,
      0xd8, 0x01, 0xa8, 0x9f, 0x1f, 0x0a, 0x2f, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomie_msgs__msg__Obstacle__TYPE_NAME[] = "roomie_msgs/msg/Obstacle";

// Define type names, field names, and default values
static char roomie_msgs__msg__Obstacle__FIELD_NAME__robot_id[] = "robot_id";
static char roomie_msgs__msg__Obstacle__FIELD_NAME__dynamic[] = "dynamic";
static char roomie_msgs__msg__Obstacle__FIELD_NAME__x[] = "x";
static char roomie_msgs__msg__Obstacle__FIELD_NAME__y[] = "y";
static char roomie_msgs__msg__Obstacle__FIELD_NAME__depth[] = "depth";

static rosidl_runtime_c__type_description__Field roomie_msgs__msg__Obstacle__FIELDS[] = {
  {
    {roomie_msgs__msg__Obstacle__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__Obstacle__FIELD_NAME__dynamic, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__Obstacle__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__Obstacle__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__Obstacle__FIELD_NAME__depth, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomie_msgs__msg__Obstacle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomie_msgs__msg__Obstacle__TYPE_NAME, 24, 24},
      {roomie_msgs__msg__Obstacle__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Obstacle.msg\n"
  "int32 robot_id\n"
  "bool dynamic\n"
  "float32 x\n"
  "float32 y\n"
  "float32 depth\n"
  "\n"
  "# dynamic values:\n"
  "# False: \\xec\\xa0\\x95\\xec\\xa0\\x81 \\xec\\x9e\\xa5\\xec\\x95\\xa0\\xeb\\xac\\xbc\n"
  "# True: \\xeb\\x8f\\x99\\xec\\xa0\\x81 \\xec\\x9e\\xa5\\xec\\x95\\xa0\\xeb\\xac\\xbc ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomie_msgs__msg__Obstacle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomie_msgs__msg__Obstacle__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 127, 127},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomie_msgs__msg__Obstacle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomie_msgs__msg__Obstacle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
