// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roomie_msgs:srv/StopTracking.idl
// generated code does not contain a copyright notice
#include "roomie_msgs/srv/detail/stop_tracking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
roomie_msgs__srv__StopTracking_Request__init(roomie_msgs__srv__StopTracking_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
roomie_msgs__srv__StopTracking_Request__fini(roomie_msgs__srv__StopTracking_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
roomie_msgs__srv__StopTracking_Request__are_equal(const roomie_msgs__srv__StopTracking_Request * lhs, const roomie_msgs__srv__StopTracking_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
roomie_msgs__srv__StopTracking_Request__copy(
  const roomie_msgs__srv__StopTracking_Request * input,
  roomie_msgs__srv__StopTracking_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

roomie_msgs__srv__StopTracking_Request *
roomie_msgs__srv__StopTracking_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Request * msg = (roomie_msgs__srv__StopTracking_Request *)allocator.allocate(sizeof(roomie_msgs__srv__StopTracking_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomie_msgs__srv__StopTracking_Request));
  bool success = roomie_msgs__srv__StopTracking_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomie_msgs__srv__StopTracking_Request__destroy(roomie_msgs__srv__StopTracking_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomie_msgs__srv__StopTracking_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomie_msgs__srv__StopTracking_Request__Sequence__init(roomie_msgs__srv__StopTracking_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Request * data = NULL;

  if (size) {
    data = (roomie_msgs__srv__StopTracking_Request *)allocator.zero_allocate(size, sizeof(roomie_msgs__srv__StopTracking_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomie_msgs__srv__StopTracking_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomie_msgs__srv__StopTracking_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roomie_msgs__srv__StopTracking_Request__Sequence__fini(roomie_msgs__srv__StopTracking_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roomie_msgs__srv__StopTracking_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roomie_msgs__srv__StopTracking_Request__Sequence *
roomie_msgs__srv__StopTracking_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Request__Sequence * array = (roomie_msgs__srv__StopTracking_Request__Sequence *)allocator.allocate(sizeof(roomie_msgs__srv__StopTracking_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomie_msgs__srv__StopTracking_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomie_msgs__srv__StopTracking_Request__Sequence__destroy(roomie_msgs__srv__StopTracking_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomie_msgs__srv__StopTracking_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomie_msgs__srv__StopTracking_Request__Sequence__are_equal(const roomie_msgs__srv__StopTracking_Request__Sequence * lhs, const roomie_msgs__srv__StopTracking_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomie_msgs__srv__StopTracking_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomie_msgs__srv__StopTracking_Request__Sequence__copy(
  const roomie_msgs__srv__StopTracking_Request__Sequence * input,
  roomie_msgs__srv__StopTracking_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomie_msgs__srv__StopTracking_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomie_msgs__srv__StopTracking_Request * data =
      (roomie_msgs__srv__StopTracking_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomie_msgs__srv__StopTracking_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomie_msgs__srv__StopTracking_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomie_msgs__srv__StopTracking_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
roomie_msgs__srv__StopTracking_Response__init(roomie_msgs__srv__StopTracking_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    roomie_msgs__srv__StopTracking_Response__fini(msg);
    return false;
  }
  return true;
}

void
roomie_msgs__srv__StopTracking_Response__fini(roomie_msgs__srv__StopTracking_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
roomie_msgs__srv__StopTracking_Response__are_equal(const roomie_msgs__srv__StopTracking_Response * lhs, const roomie_msgs__srv__StopTracking_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
roomie_msgs__srv__StopTracking_Response__copy(
  const roomie_msgs__srv__StopTracking_Response * input,
  roomie_msgs__srv__StopTracking_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

roomie_msgs__srv__StopTracking_Response *
roomie_msgs__srv__StopTracking_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Response * msg = (roomie_msgs__srv__StopTracking_Response *)allocator.allocate(sizeof(roomie_msgs__srv__StopTracking_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomie_msgs__srv__StopTracking_Response));
  bool success = roomie_msgs__srv__StopTracking_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomie_msgs__srv__StopTracking_Response__destroy(roomie_msgs__srv__StopTracking_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomie_msgs__srv__StopTracking_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomie_msgs__srv__StopTracking_Response__Sequence__init(roomie_msgs__srv__StopTracking_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Response * data = NULL;

  if (size) {
    data = (roomie_msgs__srv__StopTracking_Response *)allocator.zero_allocate(size, sizeof(roomie_msgs__srv__StopTracking_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomie_msgs__srv__StopTracking_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomie_msgs__srv__StopTracking_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roomie_msgs__srv__StopTracking_Response__Sequence__fini(roomie_msgs__srv__StopTracking_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roomie_msgs__srv__StopTracking_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roomie_msgs__srv__StopTracking_Response__Sequence *
roomie_msgs__srv__StopTracking_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Response__Sequence * array = (roomie_msgs__srv__StopTracking_Response__Sequence *)allocator.allocate(sizeof(roomie_msgs__srv__StopTracking_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomie_msgs__srv__StopTracking_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomie_msgs__srv__StopTracking_Response__Sequence__destroy(roomie_msgs__srv__StopTracking_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomie_msgs__srv__StopTracking_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomie_msgs__srv__StopTracking_Response__Sequence__are_equal(const roomie_msgs__srv__StopTracking_Response__Sequence * lhs, const roomie_msgs__srv__StopTracking_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomie_msgs__srv__StopTracking_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomie_msgs__srv__StopTracking_Response__Sequence__copy(
  const roomie_msgs__srv__StopTracking_Response__Sequence * input,
  roomie_msgs__srv__StopTracking_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomie_msgs__srv__StopTracking_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomie_msgs__srv__StopTracking_Response * data =
      (roomie_msgs__srv__StopTracking_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomie_msgs__srv__StopTracking_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomie_msgs__srv__StopTracking_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomie_msgs__srv__StopTracking_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "roomie_msgs/srv/detail/stop_tracking__functions.h"

bool
roomie_msgs__srv__StopTracking_Event__init(roomie_msgs__srv__StopTracking_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    roomie_msgs__srv__StopTracking_Event__fini(msg);
    return false;
  }
  // request
  if (!roomie_msgs__srv__StopTracking_Request__Sequence__init(&msg->request, 0)) {
    roomie_msgs__srv__StopTracking_Event__fini(msg);
    return false;
  }
  // response
  if (!roomie_msgs__srv__StopTracking_Response__Sequence__init(&msg->response, 0)) {
    roomie_msgs__srv__StopTracking_Event__fini(msg);
    return false;
  }
  return true;
}

void
roomie_msgs__srv__StopTracking_Event__fini(roomie_msgs__srv__StopTracking_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  roomie_msgs__srv__StopTracking_Request__Sequence__fini(&msg->request);
  // response
  roomie_msgs__srv__StopTracking_Response__Sequence__fini(&msg->response);
}

bool
roomie_msgs__srv__StopTracking_Event__are_equal(const roomie_msgs__srv__StopTracking_Event * lhs, const roomie_msgs__srv__StopTracking_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!roomie_msgs__srv__StopTracking_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!roomie_msgs__srv__StopTracking_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
roomie_msgs__srv__StopTracking_Event__copy(
  const roomie_msgs__srv__StopTracking_Event * input,
  roomie_msgs__srv__StopTracking_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!roomie_msgs__srv__StopTracking_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!roomie_msgs__srv__StopTracking_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

roomie_msgs__srv__StopTracking_Event *
roomie_msgs__srv__StopTracking_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Event * msg = (roomie_msgs__srv__StopTracking_Event *)allocator.allocate(sizeof(roomie_msgs__srv__StopTracking_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roomie_msgs__srv__StopTracking_Event));
  bool success = roomie_msgs__srv__StopTracking_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roomie_msgs__srv__StopTracking_Event__destroy(roomie_msgs__srv__StopTracking_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roomie_msgs__srv__StopTracking_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roomie_msgs__srv__StopTracking_Event__Sequence__init(roomie_msgs__srv__StopTracking_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Event * data = NULL;

  if (size) {
    data = (roomie_msgs__srv__StopTracking_Event *)allocator.zero_allocate(size, sizeof(roomie_msgs__srv__StopTracking_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roomie_msgs__srv__StopTracking_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roomie_msgs__srv__StopTracking_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roomie_msgs__srv__StopTracking_Event__Sequence__fini(roomie_msgs__srv__StopTracking_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roomie_msgs__srv__StopTracking_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roomie_msgs__srv__StopTracking_Event__Sequence *
roomie_msgs__srv__StopTracking_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roomie_msgs__srv__StopTracking_Event__Sequence * array = (roomie_msgs__srv__StopTracking_Event__Sequence *)allocator.allocate(sizeof(roomie_msgs__srv__StopTracking_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roomie_msgs__srv__StopTracking_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roomie_msgs__srv__StopTracking_Event__Sequence__destroy(roomie_msgs__srv__StopTracking_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roomie_msgs__srv__StopTracking_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roomie_msgs__srv__StopTracking_Event__Sequence__are_equal(const roomie_msgs__srv__StopTracking_Event__Sequence * lhs, const roomie_msgs__srv__StopTracking_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roomie_msgs__srv__StopTracking_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roomie_msgs__srv__StopTracking_Event__Sequence__copy(
  const roomie_msgs__srv__StopTracking_Event__Sequence * input,
  roomie_msgs__srv__StopTracking_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roomie_msgs__srv__StopTracking_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roomie_msgs__srv__StopTracking_Event * data =
      (roomie_msgs__srv__StopTracking_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roomie_msgs__srv__StopTracking_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roomie_msgs__srv__StopTracking_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roomie_msgs__srv__StopTracking_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
