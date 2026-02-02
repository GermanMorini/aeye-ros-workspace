// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mapviz_interfaces:srv/AddMapvizDisplay.idl
// generated code does not contain a copyright notice

#ifndef MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__TRAITS_HPP_
#define MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mapviz_interfaces/srv/detail/add_mapviz_display__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'properties'
#include "marti_common_msgs/msg/detail/key_value__traits.hpp"

namespace mapviz_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddMapvizDisplay_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: draw_order
  {
    out << "draw_order: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_order, out);
    out << ", ";
  }

  // member: visible
  {
    out << "visible: ";
    rosidl_generator_traits::value_to_yaml(msg.visible, out);
    out << ", ";
  }

  // member: properties
  {
    if (msg.properties.size() == 0) {
      out << "properties: []";
    } else {
      out << "properties: [";
      size_t pending_items = msg.properties.size();
      for (auto item : msg.properties) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddMapvizDisplay_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: draw_order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "draw_order: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_order, out);
    out << "\n";
  }

  // member: visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visible: ";
    rosidl_generator_traits::value_to_yaml(msg.visible, out);
    out << "\n";
  }

  // member: properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.properties.size() == 0) {
      out << "properties: []\n";
    } else {
      out << "properties:\n";
      for (auto item : msg.properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddMapvizDisplay_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mapviz_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mapviz_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mapviz_interfaces::srv::AddMapvizDisplay_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapviz_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapviz_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapviz_interfaces::srv::AddMapvizDisplay_Request & msg)
{
  return mapviz_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapviz_interfaces::srv::AddMapvizDisplay_Request>()
{
  return "mapviz_interfaces::srv::AddMapvizDisplay_Request";
}

template<>
inline const char * name<mapviz_interfaces::srv::AddMapvizDisplay_Request>()
{
  return "mapviz_interfaces/srv/AddMapvizDisplay_Request";
}

template<>
struct has_fixed_size<mapviz_interfaces::srv::AddMapvizDisplay_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapviz_interfaces::srv::AddMapvizDisplay_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mapviz_interfaces::srv::AddMapvizDisplay_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mapviz_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddMapvizDisplay_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddMapvizDisplay_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddMapvizDisplay_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mapviz_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mapviz_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mapviz_interfaces::srv::AddMapvizDisplay_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapviz_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapviz_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapviz_interfaces::srv::AddMapvizDisplay_Response & msg)
{
  return mapviz_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapviz_interfaces::srv::AddMapvizDisplay_Response>()
{
  return "mapviz_interfaces::srv::AddMapvizDisplay_Response";
}

template<>
inline const char * name<mapviz_interfaces::srv::AddMapvizDisplay_Response>()
{
  return "mapviz_interfaces/srv/AddMapvizDisplay_Response";
}

template<>
struct has_fixed_size<mapviz_interfaces::srv::AddMapvizDisplay_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapviz_interfaces::srv::AddMapvizDisplay_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mapviz_interfaces::srv::AddMapvizDisplay_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mapviz_interfaces::srv::AddMapvizDisplay>()
{
  return "mapviz_interfaces::srv::AddMapvizDisplay";
}

template<>
inline const char * name<mapviz_interfaces::srv::AddMapvizDisplay>()
{
  return "mapviz_interfaces/srv/AddMapvizDisplay";
}

template<>
struct has_fixed_size<mapviz_interfaces::srv::AddMapvizDisplay>
  : std::integral_constant<
    bool,
    has_fixed_size<mapviz_interfaces::srv::AddMapvizDisplay_Request>::value &&
    has_fixed_size<mapviz_interfaces::srv::AddMapvizDisplay_Response>::value
  >
{
};

template<>
struct has_bounded_size<mapviz_interfaces::srv::AddMapvizDisplay>
  : std::integral_constant<
    bool,
    has_bounded_size<mapviz_interfaces::srv::AddMapvizDisplay_Request>::value &&
    has_bounded_size<mapviz_interfaces::srv::AddMapvizDisplay_Response>::value
  >
{
};

template<>
struct is_service<mapviz_interfaces::srv::AddMapvizDisplay>
  : std::true_type
{
};

template<>
struct is_service_request<mapviz_interfaces::srv::AddMapvizDisplay_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mapviz_interfaces::srv::AddMapvizDisplay_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAPVIZ_INTERFACES__SRV__DETAIL__ADD_MAPVIZ_DISPLAY__TRAITS_HPP_
