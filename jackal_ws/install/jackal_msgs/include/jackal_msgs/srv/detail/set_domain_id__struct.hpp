// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jackal_msgs:srv/SetDomainId.idl
// generated code does not contain a copyright notice

#ifndef JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__STRUCT_HPP_
#define JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__jackal_msgs__srv__SetDomainId_Request __attribute__((deprecated))
#else
# define DEPRECATED__jackal_msgs__srv__SetDomainId_Request __declspec(deprecated)
#endif

namespace jackal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDomainId_Request_
{
  using Type = SetDomainId_Request_<ContainerAllocator>;

  explicit SetDomainId_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain_id = 0;
    }
  }

  explicit SetDomainId_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->domain_id = 0;
    }
  }

  // field types and members
  using _domain_id_type =
    uint8_t;
  _domain_id_type domain_id;

  // setters for named parameter idiom
  Type & set__domain_id(
    const uint8_t & _arg)
  {
    this->domain_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jackal_msgs__srv__SetDomainId_Request
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jackal_msgs__srv__SetDomainId_Request
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDomainId_Request_ & other) const
  {
    if (this->domain_id != other.domain_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDomainId_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDomainId_Request_

// alias to use template instance with default allocator
using SetDomainId_Request =
  jackal_msgs::srv::SetDomainId_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jackal_msgs


#ifndef _WIN32
# define DEPRECATED__jackal_msgs__srv__SetDomainId_Response __attribute__((deprecated))
#else
# define DEPRECATED__jackal_msgs__srv__SetDomainId_Response __declspec(deprecated)
#endif

namespace jackal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDomainId_Response_
{
  using Type = SetDomainId_Response_<ContainerAllocator>;

  explicit SetDomainId_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetDomainId_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jackal_msgs__srv__SetDomainId_Response
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jackal_msgs__srv__SetDomainId_Response
    std::shared_ptr<jackal_msgs::srv::SetDomainId_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDomainId_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDomainId_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDomainId_Response_

// alias to use template instance with default allocator
using SetDomainId_Response =
  jackal_msgs::srv::SetDomainId_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jackal_msgs

namespace jackal_msgs
{

namespace srv
{

struct SetDomainId
{
  using Request = jackal_msgs::srv::SetDomainId_Request;
  using Response = jackal_msgs::srv::SetDomainId_Response;
};

}  // namespace srv

}  // namespace jackal_msgs

#endif  // JACKAL_MSGS__SRV__DETAIL__SET_DOMAIN_ID__STRUCT_HPP_
