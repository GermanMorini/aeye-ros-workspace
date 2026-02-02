// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice
#include "mapviz_interfaces/srv/detail/add_mapviz_display__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `properties`
#include "marti_common_msgs/msg/detail/key_value__functions.h"

bool
mapviz_interfaces__srv__AddMapvizDisplay_Request__init(mapviz_interfaces__srv__AddMapvizDisplay_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(msg);
    return false;
  }
  // draw_order
  // visible
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__init(&msg->properties, 0)) {
    mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(msg);
    return false;
  }
  return true;
}

void
mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(mapviz_interfaces__srv__AddMapvizDisplay_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // draw_order
  // visible
  // properties
  marti_common_msgs__msg__KeyValue__Sequence__fini(&msg->properties);
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Request__are_equal(const mapviz_interfaces__srv__AddMapvizDisplay_Request * lhs, const mapviz_interfaces__srv__AddMapvizDisplay_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // draw_order
  if (lhs->draw_order != rhs->draw_order) {
    return false;
  }
  // visible
  if (lhs->visible != rhs->visible) {
    return false;
  }
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->properties), &(rhs->properties)))
  {
    return false;
  }
  return true;
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Request__copy(
  const mapviz_interfaces__srv__AddMapvizDisplay_Request * input,
  mapviz_interfaces__srv__AddMapvizDisplay_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // draw_order
  output->draw_order = input->draw_order;
  // visible
  output->visible = input->visible;
  // properties
  if (!marti_common_msgs__msg__KeyValue__Sequence__copy(
      &(input->properties), &(output->properties)))
  {
    return false;
  }
  return true;
}

mapviz_interfaces__srv__AddMapvizDisplay_Request *
mapviz_interfaces__srv__AddMapvizDisplay_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapviz_interfaces__srv__AddMapvizDisplay_Request * msg = (mapviz_interfaces__srv__AddMapvizDisplay_Request *)allocator.allocate(sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Request));
  bool success = mapviz_interfaces__srv__AddMapvizDisplay_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapviz_interfaces__srv__AddMapvizDisplay_Request__destroy(mapviz_interfaces__srv__AddMapvizDisplay_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__init(mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapviz_interfaces__srv__AddMapvizDisplay_Request * data = NULL;

  if (size) {
    data = (mapviz_interfaces__srv__AddMapvizDisplay_Request *)allocator.zero_allocate(size, sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapviz_interfaces__srv__AddMapvizDisplay_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(&data[i - 1]);
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
mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__fini(mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * array)
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
      mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(&array->data[i]);
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

mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence *
mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * array = (mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence *)allocator.allocate(sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__destroy(mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__are_equal(const mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * lhs, const mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapviz_interfaces__srv__AddMapvizDisplay_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence__copy(
  const mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * input,
  mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapviz_interfaces__srv__AddMapvizDisplay_Request * data =
      (mapviz_interfaces__srv__AddMapvizDisplay_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapviz_interfaces__srv__AddMapvizDisplay_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapviz_interfaces__srv__AddMapvizDisplay_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mapviz_interfaces__srv__AddMapvizDisplay_Response__init(mapviz_interfaces__srv__AddMapvizDisplay_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(msg);
    return false;
  }
  return true;
}

void
mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(mapviz_interfaces__srv__AddMapvizDisplay_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Response__are_equal(const mapviz_interfaces__srv__AddMapvizDisplay_Response * lhs, const mapviz_interfaces__srv__AddMapvizDisplay_Response * rhs)
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
mapviz_interfaces__srv__AddMapvizDisplay_Response__copy(
  const mapviz_interfaces__srv__AddMapvizDisplay_Response * input,
  mapviz_interfaces__srv__AddMapvizDisplay_Response * output)
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

mapviz_interfaces__srv__AddMapvizDisplay_Response *
mapviz_interfaces__srv__AddMapvizDisplay_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapviz_interfaces__srv__AddMapvizDisplay_Response * msg = (mapviz_interfaces__srv__AddMapvizDisplay_Response *)allocator.allocate(sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Response));
  bool success = mapviz_interfaces__srv__AddMapvizDisplay_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapviz_interfaces__srv__AddMapvizDisplay_Response__destroy(mapviz_interfaces__srv__AddMapvizDisplay_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__init(mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapviz_interfaces__srv__AddMapvizDisplay_Response * data = NULL;

  if (size) {
    data = (mapviz_interfaces__srv__AddMapvizDisplay_Response *)allocator.zero_allocate(size, sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapviz_interfaces__srv__AddMapvizDisplay_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(&data[i - 1]);
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
mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__fini(mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * array)
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
      mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(&array->data[i]);
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

mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence *
mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * array = (mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence *)allocator.allocate(sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__destroy(mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__are_equal(const mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * lhs, const mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapviz_interfaces__srv__AddMapvizDisplay_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence__copy(
  const mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * input,
  mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapviz_interfaces__srv__AddMapvizDisplay_Response * data =
      (mapviz_interfaces__srv__AddMapvizDisplay_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapviz_interfaces__srv__AddMapvizDisplay_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapviz_interfaces__srv__AddMapvizDisplay_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
