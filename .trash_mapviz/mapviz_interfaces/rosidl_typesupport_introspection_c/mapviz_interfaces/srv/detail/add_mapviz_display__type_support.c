// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mapviz_interfaces/srv/detail/add_mapviz_display__rosidl_typesupport_introspection_c.h"
#include "mapviz_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mapviz_interfaces/srv/detail/add_mapviz_display__functions.h"
#include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.h"


// Include directives for member types
// Member `name`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `properties`
#include "marti_common_msgs/msg/key_value.h"
// Member `properties`
#include "marti_common_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapviz_interfaces__srv__AddMapvizDisplay_Request__init(message_memory);
}

void mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_fini_function(void * message_memory)
{
  mapviz_interfaces__srv__AddMapvizDisplay_Request__fini(message_memory);
}

size_t mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__size_function__AddMapvizDisplay_Request__properties(
  const void * untyped_member)
{
  const marti_common_msgs__msg__KeyValue__Sequence * member =
    (const marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__get_const_function__AddMapvizDisplay_Request__properties(
  const void * untyped_member, size_t index)
{
  const marti_common_msgs__msg__KeyValue__Sequence * member =
    (const marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__get_function__AddMapvizDisplay_Request__properties(
  void * untyped_member, size_t index)
{
  marti_common_msgs__msg__KeyValue__Sequence * member =
    (marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__fetch_function__AddMapvizDisplay_Request__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const marti_common_msgs__msg__KeyValue * item =
    ((const marti_common_msgs__msg__KeyValue *)
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__get_const_function__AddMapvizDisplay_Request__properties(untyped_member, index));
  marti_common_msgs__msg__KeyValue * value =
    (marti_common_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__assign_function__AddMapvizDisplay_Request__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  marti_common_msgs__msg__KeyValue * item =
    ((marti_common_msgs__msg__KeyValue *)
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__get_function__AddMapvizDisplay_Request__properties(untyped_member, index));
  const marti_common_msgs__msg__KeyValue * value =
    (const marti_common_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__resize_function__AddMapvizDisplay_Request__properties(
  void * untyped_member, size_t size)
{
  marti_common_msgs__msg__KeyValue__Sequence * member =
    (marti_common_msgs__msg__KeyValue__Sequence *)(untyped_member);
  marti_common_msgs__msg__KeyValue__Sequence__fini(member);
  return marti_common_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "draw_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Request, draw_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visible",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Request, visible),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Request, properties),  // bytes offset in struct
    NULL,  // default value
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__size_function__AddMapvizDisplay_Request__properties,  // size() function pointer
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__get_const_function__AddMapvizDisplay_Request__properties,  // get_const(index) function pointer
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__get_function__AddMapvizDisplay_Request__properties,  // get(index) function pointer
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__fetch_function__AddMapvizDisplay_Request__properties,  // fetch(index, &value) function pointer
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__assign_function__AddMapvizDisplay_Request__properties,  // assign(index, value) function pointer
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__resize_function__AddMapvizDisplay_Request__properties  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_members = {
  "mapviz_interfaces__srv",  // message namespace
  "AddMapvizDisplay_Request",  // message name
  5,  // number of fields
  sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Request),
  mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_member_array,  // message members
  mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_type_support_handle = {
  0,
  &mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapviz_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay_Request)() {
  mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marti_common_msgs, msg, KeyValue)();
  if (!mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_type_support_handle.typesupport_identifier) {
    mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapviz_interfaces__srv__AddMapvizDisplay_Request__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mapviz_interfaces/srv/detail/add_mapviz_display__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mapviz_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mapviz_interfaces/srv/detail/add_mapviz_display__functions.h"
// already included above
// #include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapviz_interfaces__srv__AddMapvizDisplay_Response__init(message_memory);
}

void mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_fini_function(void * message_memory)
{
  mapviz_interfaces__srv__AddMapvizDisplay_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces__srv__AddMapvizDisplay_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_members = {
  "mapviz_interfaces__srv",  // message namespace
  "AddMapvizDisplay_Response",  // message name
  2,  // number of fields
  sizeof(mapviz_interfaces__srv__AddMapvizDisplay_Response),
  mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_member_array,  // message members
  mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_type_support_handle = {
  0,
  &mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapviz_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay_Response)() {
  if (!mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_type_support_handle.typesupport_identifier) {
    mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapviz_interfaces__srv__AddMapvizDisplay_Response__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mapviz_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mapviz_interfaces/srv/detail/add_mapviz_display__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_members = {
  "mapviz_interfaces__srv",  // service namespace
  "AddMapvizDisplay",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_Request_message_type_support_handle,
  NULL  // response message
  // mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_Response_message_type_support_handle
};

static rosidl_service_type_support_t mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_type_support_handle = {
  0,
  &mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapviz_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay)() {
  if (!mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_type_support_handle.typesupport_identifier) {
    mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapviz_interfaces, srv, AddMapvizDisplay_Response)()->data;
  }

  return &mapviz_interfaces__srv__detail__add_mapviz_display__rosidl_typesupport_introspection_c__AddMapvizDisplay_service_type_support_handle;
}
