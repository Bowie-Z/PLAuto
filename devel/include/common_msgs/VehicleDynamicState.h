// Generated by gencpp from file common_msgs/VehicleDynamicState.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_MESSAGE_VEHICLEDYNAMICSTATE_H
#define COMMON_MSGS_MESSAGE_VEHICLEDYNAMICSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace common_msgs
{
template <class ContainerAllocator>
struct VehicleDynamicState_
{
  typedef VehicleDynamicState_<ContainerAllocator> Type;

  VehicleDynamicState_()
    : header()
    , lon_speed(0.0)
    , lon_acceleration(0.0)
    , lat_speed(0.0)
    , lat_acceleration(0.0)
    , yaw_rate(0.0)
    , yaw_acceleration(0.0)  {
    }
  VehicleDynamicState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lon_speed(0.0)
    , lon_acceleration(0.0)
    , lat_speed(0.0)
    , lat_acceleration(0.0)
    , yaw_rate(0.0)
    , yaw_acceleration(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _lon_speed_type;
  _lon_speed_type lon_speed;

   typedef double _lon_acceleration_type;
  _lon_acceleration_type lon_acceleration;

   typedef double _lat_speed_type;
  _lat_speed_type lat_speed;

   typedef double _lat_acceleration_type;
  _lat_acceleration_type lat_acceleration;

   typedef double _yaw_rate_type;
  _yaw_rate_type yaw_rate;

   typedef double _yaw_acceleration_type;
  _yaw_acceleration_type yaw_acceleration;





  typedef boost::shared_ptr< ::common_msgs::VehicleDynamicState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::common_msgs::VehicleDynamicState_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleDynamicState_

typedef ::common_msgs::VehicleDynamicState_<std::allocator<void> > VehicleDynamicState;

typedef boost::shared_ptr< ::common_msgs::VehicleDynamicState > VehicleDynamicStatePtr;
typedef boost::shared_ptr< ::common_msgs::VehicleDynamicState const> VehicleDynamicStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::common_msgs::VehicleDynamicState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::common_msgs::VehicleDynamicState_<ContainerAllocator1> & lhs, const ::common_msgs::VehicleDynamicState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.lon_speed == rhs.lon_speed &&
    lhs.lon_acceleration == rhs.lon_acceleration &&
    lhs.lat_speed == rhs.lat_speed &&
    lhs.lat_acceleration == rhs.lat_acceleration &&
    lhs.yaw_rate == rhs.yaw_rate &&
    lhs.yaw_acceleration == rhs.yaw_acceleration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::common_msgs::VehicleDynamicState_<ContainerAllocator1> & lhs, const ::common_msgs::VehicleDynamicState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs::VehicleDynamicState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs::VehicleDynamicState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs::VehicleDynamicState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "543c8cc51ef4a96b419de72eeff8a6e9";
  }

  static const char* value(const ::common_msgs::VehicleDynamicState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x543c8cc51ef4a96bULL;
  static const uint64_t static_value2 = 0x419de72eeff8a6e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "common_msgs/VehicleDynamicState";
  }

  static const char* value(const ::common_msgs::VehicleDynamicState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header  header\n"
"\n"
"float64 lon_speed\n"
"float64 lon_acceleration\n"
"float64 lat_speed\n"
"float64 lat_acceleration\n"
"float64 yaw_rate\n"
"float64 yaw_acceleration\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::common_msgs::VehicleDynamicState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lon_speed);
      stream.next(m.lon_acceleration);
      stream.next(m.lat_speed);
      stream.next(m.lat_acceleration);
      stream.next(m.yaw_rate);
      stream.next(m.yaw_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleDynamicState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::common_msgs::VehicleDynamicState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::common_msgs::VehicleDynamicState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lon_speed: ";
    Printer<double>::stream(s, indent + "  ", v.lon_speed);
    s << indent << "lon_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.lon_acceleration);
    s << indent << "lat_speed: ";
    Printer<double>::stream(s, indent + "  ", v.lat_speed);
    s << indent << "lat_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.lat_acceleration);
    s << indent << "yaw_rate: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_rate);
    s << indent << "yaw_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_MSGS_MESSAGE_VEHICLEDYNAMICSTATE_H
