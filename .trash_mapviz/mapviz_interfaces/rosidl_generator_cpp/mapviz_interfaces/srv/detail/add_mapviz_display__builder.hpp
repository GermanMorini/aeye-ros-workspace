// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice

#ifndef MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__BUILDER_HPP_
#define MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mapviz_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddMapvizDisplay_Request_properties
{
public:
  explicit Init_AddMapvizDisplay_Request_properties(::mapviz_interfaces::srv::AddMapvizDisplay_Request & msg)
  : msg_(msg)
  {}
  ::mapviz_interfaces::srv::AddMapvizDisplay_Request properties(::mapviz_interfaces::srv::AddMapvizDisplay_Request::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Request msg_;
};

class Init_AddMapvizDisplay_Request_visible
{
public:
  explicit Init_AddMapvizDisplay_Request_visible(::mapviz_interfaces::srv::AddMapvizDisplay_Request & msg)
  : msg_(msg)
  {}
  Init_AddMapvizDisplay_Request_properties visible(::mapviz_interfaces::srv::AddMapvizDisplay_Request::_visible_type arg)
  {
    msg_.visible = std::move(arg);
    return Init_AddMapvizDisplay_Request_properties(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Request msg_;
};

class Init_AddMapvizDisplay_Request_draw_order
{
public:
  explicit Init_AddMapvizDisplay_Request_draw_order(::mapviz_interfaces::srv::AddMapvizDisplay_Request & msg)
  : msg_(msg)
  {}
  Init_AddMapvizDisplay_Request_visible draw_order(::mapviz_interfaces::srv::AddMapvizDisplay_Request::_draw_order_type arg)
  {
    msg_.draw_order = std::move(arg);
    return Init_AddMapvizDisplay_Request_visible(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Request msg_;
};

class Init_AddMapvizDisplay_Request_type
{
public:
  explicit Init_AddMapvizDisplay_Request_type(::mapviz_interfaces::srv::AddMapvizDisplay_Request & msg)
  : msg_(msg)
  {}
  Init_AddMapvizDisplay_Request_draw_order type(::mapviz_interfaces::srv::AddMapvizDisplay_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AddMapvizDisplay_Request_draw_order(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Request msg_;
};

class Init_AddMapvizDisplay_Request_name
{
public:
  Init_AddMapvizDisplay_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddMapvizDisplay_Request_type name(::mapviz_interfaces::srv::AddMapvizDisplay_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_AddMapvizDisplay_Request_type(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapviz_interfaces::srv::AddMapvizDisplay_Request>()
{
  return mapviz_interfaces::srv::builder::Init_AddMapvizDisplay_Request_name();
}

}  // namespace mapviz_interfaces


namespace mapviz_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddMapvizDisplay_Response_message
{
public:
  explicit Init_AddMapvizDisplay_Response_message(::mapviz_interfaces::srv::AddMapvizDisplay_Response & msg)
  : msg_(msg)
  {}
  ::mapviz_interfaces::srv::AddMapvizDisplay_Response message(::mapviz_interfaces::srv::AddMapvizDisplay_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Response msg_;
};

class Init_AddMapvizDisplay_Response_success
{
public:
  Init_AddMapvizDisplay_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddMapvizDisplay_Response_message success(::mapviz_interfaces::srv::AddMapvizDisplay_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddMapvizDisplay_Response_message(msg_);
  }

private:
  ::mapviz_interfaces::srv::AddMapvizDisplay_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapviz_interfaces::srv::AddMapvizDisplay_Response>()
{
  return mapviz_interfaces::srv::builder::Init_AddMapvizDisplay_Response_success();
}

}  // namespace mapviz_interfaces

#endif  // MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__BUILDER_HPP_
