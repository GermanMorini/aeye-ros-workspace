// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mapviz_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AddMapvizDisplay_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mapviz_interfaces::srv::AddMapvizDisplay_Request(_init);
}

void AddMapvizDisplay_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mapviz_interfaces::srv::AddMapvizDisplay_Request *>(message_memory);
  typed_message->~AddMapvizDisplay_Request();
}

size_t size_function__AddMapvizDisplay_Request__properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AddMapvizDisplay_Request__properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__AddMapvizDisplay_Request__properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__AddMapvizDisplay_Request__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const marti_common_msgs::msg::KeyValue *>(
    get_const_function__AddMapvizDisplay_Request__properties(untyped_member, index));
  auto & value = *reinterpret_cast<marti_common_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__AddMapvizDisplay_Request__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<marti_common_msgs::msg::KeyValue *>(
    get_function__AddMapvizDisplay_Request__properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const marti_common_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__AddMapvizDisplay_Request__properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<marti_common_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddMapvizDisplay_Request_message_member_array[5] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Request, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Request, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "draw_order",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Request, draw_order),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "visible",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Request, visible),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "properties",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<marti_common_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Request, properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__AddMapvizDisplay_Request__properties,  // size() function pointer
    get_const_function__AddMapvizDisplay_Request__properties,  // get_const(index) function pointer
    get_function__AddMapvizDisplay_Request__properties,  // get(index) function pointer
    fetch_function__AddMapvizDisplay_Request__properties,  // fetch(index, &value) function pointer
    assign_function__AddMapvizDisplay_Request__properties,  // assign(index, value) function pointer
    resize_function__AddMapvizDisplay_Request__properties  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddMapvizDisplay_Request_message_members = {
  "mapviz_interfaces::srv",  // message namespace
  "AddMapvizDisplay_Request",  // message name
  5,  // number of fields
  sizeof(mapviz_interfaces::srv::AddMapvizDisplay_Request),
  AddMapvizDisplay_Request_message_member_array,  // message members
  AddMapvizDisplay_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddMapvizDisplay_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddMapvizDisplay_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddMapvizDisplay_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mapviz_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mapviz_interfaces::srv::AddMapvizDisplay_Request>()
{
  return &::mapviz_interfaces::srv::rosidl_typesupport_introspection_cpp::AddMapvizDisplay_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mapviz_interfaces, srv, AddMapvizDisplay_Request)() {
  return &::mapviz_interfaces::srv::rosidl_typesupport_introspection_cpp::AddMapvizDisplay_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mapviz_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AddMapvizDisplay_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mapviz_interfaces::srv::AddMapvizDisplay_Response(_init);
}

void AddMapvizDisplay_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mapviz_interfaces::srv::AddMapvizDisplay_Response *>(message_memory);
  typed_message->~AddMapvizDisplay_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AddMapvizDisplay_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapviz_interfaces::srv::AddMapvizDisplay_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AddMapvizDisplay_Response_message_members = {
  "mapviz_interfaces::srv",  // message namespace
  "AddMapvizDisplay_Response",  // message name
  2,  // number of fields
  sizeof(mapviz_interfaces::srv::AddMapvizDisplay_Response),
  AddMapvizDisplay_Response_message_member_array,  // message members
  AddMapvizDisplay_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddMapvizDisplay_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AddMapvizDisplay_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddMapvizDisplay_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mapviz_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mapviz_interfaces::srv::AddMapvizDisplay_Response>()
{
  return &::mapviz_interfaces::srv::rosidl_typesupport_introspection_cpp::AddMapvizDisplay_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mapviz_interfaces, srv, AddMapvizDisplay_Response)() {
  return &::mapviz_interfaces::srv::rosidl_typesupport_introspection_cpp::AddMapvizDisplay_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace mapviz_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AddMapvizDisplay_service_members = {
  "mapviz_interfaces::srv",  // service namespace
  "AddMapvizDisplay",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<mapviz_interfaces::srv::AddMapvizDisplay>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AddMapvizDisplay_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddMapvizDisplay_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace mapviz_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mapviz_interfaces::srv::AddMapvizDisplay>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::mapviz_interfaces::srv::rosidl_typesupport_introspection_cpp::AddMapvizDisplay_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mapviz_interfaces::srv::AddMapvizDisplay_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::mapviz_interfaces::srv::AddMapvizDisplay_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mapviz_interfaces, srv, AddMapvizDisplay)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<mapviz_interfaces::srv::AddMapvizDisplay>();
}

#ifdef __cplusplus
}
#endif
