// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roomie_msgs:msg/Tracking.idl
// generated code does not contain a copyright notice

#include "roomie_msgs/msg/detail/tracking__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roomie_msgs
const rosidl_type_hash_t *
roomie_msgs__msg__Tracking__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0x5e, 0x36, 0xfc, 0x14, 0x39, 0x3c, 0xd0,
      0xae, 0x75, 0x95, 0xf8, 0x90, 0x0e, 0xa9, 0x19,
      0x51, 0x45, 0xfa, 0xe2, 0x34, 0x89, 0x1b, 0x45,
      0xed, 0x8c, 0x56, 0x98, 0x19, 0x75, 0x8c, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roomie_msgs__msg__Tracking__TYPE_NAME[] = "roomie_msgs/msg/Tracking";

// Define type names, field names, and default values
static char roomie_msgs__msg__Tracking__FIELD_NAME__id[] = "id";
static char roomie_msgs__msg__Tracking__FIELD_NAME__event[] = "event";

static rosidl_runtime_c__type_description__Field roomie_msgs__msg__Tracking__FIELDS[] = {
  {
    {roomie_msgs__msg__Tracking__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roomie_msgs__msg__Tracking__FIELD_NAME__event, 5, 5},
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
roomie_msgs__msg__Tracking__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roomie_msgs__msg__Tracking__TYPE_NAME, 24, 24},
      {roomie_msgs__msg__Tracking__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 id\n"
  "int32 event  # 0=NONE, 1=LOST, 2=REACQUIRED";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roomie_msgs__msg__Tracking__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roomie_msgs__msg__Tracking__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roomie_msgs__msg__Tracking__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roomie_msgs__msg__Tracking__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
