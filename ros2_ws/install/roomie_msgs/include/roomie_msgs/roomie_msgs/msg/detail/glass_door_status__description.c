// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomie_msgs:msg/GlassDoorStatus.idl
// generated code does not contain a copyright notice

#include "roomie_msgs/msg/detail/glass_door_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomie_msgs
const rosidl_type_hash_t *
roomie_msgs__msg__GlassDoorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x14, 0x1d, 0xed, 0x98, 0xed, 0xd8, 0xef,
      0x7d, 0x60, 0x35, 0xc4, 0x25, 0xad, 0x04, 0xa6,
      0xab, 0x58, 0x85, 0x26, 0xdb, 0x0a, 0x1e, 0x01,
      0xbe, 0xa2, 0x29, 0xaa, 0xd2, 0xc6, 0x3e, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomie_msgs__msg__GlassDoorStatus__TYPE_NAME[] = "roomie_msgs/msg/GlassDoorStatus";

// Define type names, field names, and default values
static char roomie_msgs__msg__GlassDoorStatus__FIELD_NAME__robot_id[] = "robot_id";
static char roomie_msgs__msg__GlassDoorStatus__FIELD_NAME__opened[] = "opened";

static rosidl_runtime_c__type_description__Field roomie_msgs__msg__GlassDoorStatus__FIELDS[] = {
  {
    {roomie_msgs__msg__GlassDoorStatus__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__GlassDoorStatus__FIELD_NAME__opened, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roomie_msgs__msg__GlassDoorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomie_msgs__msg__GlassDoorStatus__TYPE_NAME, 31, 31},
      {roomie_msgs__msg__GlassDoorStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GlassDoorStatus.msg\n"
  "int32 robot_id\n"
  "bool opened\n"
  "\n"
  "# opened values:\n"
  "# False: closed\n"
  "# True: opened ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomie_msgs__msg__GlassDoorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomie_msgs__msg__GlassDoorStatus__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomie_msgs__msg__GlassDoorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomie_msgs__msg__GlassDoorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
