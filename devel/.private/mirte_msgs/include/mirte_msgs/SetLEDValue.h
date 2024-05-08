// Generated by gencpp from file mirte_msgs/SetLEDValue.msg
// DO NOT EDIT!


#ifndef MIRTE_MSGS_MESSAGE_SETLEDVALUE_H
#define MIRTE_MSGS_MESSAGE_SETLEDVALUE_H

#include <ros/service_traits.h>


#include <mirte_msgs/SetLEDValueRequest.h>
#include <mirte_msgs/SetLEDValueResponse.h>


namespace mirte_msgs
{

struct SetLEDValue
{

typedef SetLEDValueRequest Request;
typedef SetLEDValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetLEDValue
} // namespace mirte_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mirte_msgs::SetLEDValue > {
  static const char* value()
  {
    return "42048ea920ba4286ecdfb4bc68063c32";
  }

  static const char* value(const ::mirte_msgs::SetLEDValue&) { return value(); }
};

template<>
struct DataType< ::mirte_msgs::SetLEDValue > {
  static const char* value()
  {
    return "mirte_msgs/SetLEDValue";
  }

  static const char* value(const ::mirte_msgs::SetLEDValue&) { return value(); }
};


// service_traits::MD5Sum< ::mirte_msgs::SetLEDValueRequest> should match
// service_traits::MD5Sum< ::mirte_msgs::SetLEDValue >
template<>
struct MD5Sum< ::mirte_msgs::SetLEDValueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mirte_msgs::SetLEDValue >::value();
  }
  static const char* value(const ::mirte_msgs::SetLEDValueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mirte_msgs::SetLEDValueRequest> should match
// service_traits::DataType< ::mirte_msgs::SetLEDValue >
template<>
struct DataType< ::mirte_msgs::SetLEDValueRequest>
{
  static const char* value()
  {
    return DataType< ::mirte_msgs::SetLEDValue >::value();
  }
  static const char* value(const ::mirte_msgs::SetLEDValueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mirte_msgs::SetLEDValueResponse> should match
// service_traits::MD5Sum< ::mirte_msgs::SetLEDValue >
template<>
struct MD5Sum< ::mirte_msgs::SetLEDValueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mirte_msgs::SetLEDValue >::value();
  }
  static const char* value(const ::mirte_msgs::SetLEDValueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mirte_msgs::SetLEDValueResponse> should match
// service_traits::DataType< ::mirte_msgs::SetLEDValue >
template<>
struct DataType< ::mirte_msgs::SetLEDValueResponse>
{
  static const char* value()
  {
    return DataType< ::mirte_msgs::SetLEDValue >::value();
  }
  static const char* value(const ::mirte_msgs::SetLEDValueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MIRTE_MSGS_MESSAGE_SETLEDVALUE_H