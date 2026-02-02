// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice

#ifndef MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__STRUCT_H_
#define MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__struct.h"

/// Struct defined in srv/AddMapvizDisplay in the package mapviz_interfaces.
typedef struct mapviz_interfaces__srv__AddMapvizDisplay_Request
{
  /// The name of the display.
  rosidl_runtime_c__String name;
  /// The plugin type.
  rosidl_runtime_c__String type;
  /// The display order. 1 corresponds
  /// to the first displayed, 2 to the
  /// second, -1 to last, and -2 to the
  /// second to last, etc.  0 will keep
  /// the current display order of an
  /// existing display and give a new
  /// display the last display order.
  int32_t draw_order;
  /// If the display should be visible.
  bool visible;
  /// Configuration properties.
  marti_common_msgs__msg__KeyValue__Sequence properties;
} mapviz_interfaces__srv__AddMapvizDisplay_Request;

// Struct for a sequence of mapviz_interfaces__srv__AddMapvizDisplay_Request.
typedef struct mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence
{
  mapviz_interfaces__srv__AddMapvizDisplay_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapviz_interfaces__srv__AddMapvizDisplay_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AddMapvizDisplay in the package mapviz_interfaces.
typedef struct mapviz_interfaces__srv__AddMapvizDisplay_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} mapviz_interfaces__srv__AddMapvizDisplay_Response;

// Struct for a sequence of mapviz_interfaces__srv__AddMapvizDisplay_Response.
typedef struct mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence
{
  mapviz_interfaces__srv__AddMapvizDisplay_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapviz_interfaces__srv__AddMapvizDisplay_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__STRUCT_H_
