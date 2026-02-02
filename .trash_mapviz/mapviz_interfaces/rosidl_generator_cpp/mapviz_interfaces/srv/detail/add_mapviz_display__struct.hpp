// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice

#ifndef MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__STRUCT_HPP_
#define MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Request __attribute__((deprecated))
#else
# define DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Request __declspec(deprecated)
#endif

namespace mapviz_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddMapvizDisplay_Request_
{
  using Type = AddMapvizDisplay_Request_<ContainerAllocator>;

  explicit AddMapvizDisplay_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->draw_order = 0l;
      this->visible = false;
    }
  }

  explicit AddMapvizDisplay_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->draw_order = 0l;
      this->visible = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _draw_order_type =
    int32_t;
  _draw_order_type draw_order;
  using _visible_type =
    bool;
  _visible_type visible;
  using _properties_type =
    std::vector<marti_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_common_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__draw_order(
    const int32_t & _arg)
  {
    this->draw_order = _arg;
    return *this;
  }
  Type & set__visible(
    const bool & _arg)
  {
    this->visible = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<marti_common_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<marti_common_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->properties = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Request
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Request
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddMapvizDisplay_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->draw_order != other.draw_order) {
      return false;
    }
    if (this->visible != other.visible) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddMapvizDisplay_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddMapvizDisplay_Request_

// alias to use template instance with default allocator
using AddMapvizDisplay_Request =
  mapviz_interfaces::srv::AddMapvizDisplay_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapviz_interfaces


#ifndef _WIN32
# define DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Response __attribute__((deprecated))
#else
# define DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Response __declspec(deprecated)
#endif

namespace mapviz_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddMapvizDisplay_Response_
{
  using Type = AddMapvizDisplay_Response_<ContainerAllocator>;

  explicit AddMapvizDisplay_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit AddMapvizDisplay_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Response
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapviz_interfaces__srv__AddMapvizDisplay_Response
    std::shared_ptr<mapviz_interfaces::srv::AddMapvizDisplay_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddMapvizDisplay_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddMapvizDisplay_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddMapvizDisplay_Response_

// alias to use template instance with default allocator
using AddMapvizDisplay_Response =
  mapviz_interfaces::srv::AddMapvizDisplay_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapviz_interfaces

namespace mapviz_interfaces
{

namespace srv
{

struct AddMapvizDisplay
{
  using Request = mapviz_interfaces::srv::AddMapvizDisplay_Request;
  using Response = mapviz_interfaces::srv::AddMapvizDisplay_Response;
};

}  // namespace srv

}  // namespace mapviz_interfaces

#endif  // MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__STRUCT_HPP_
