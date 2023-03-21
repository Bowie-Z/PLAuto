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
    , vehicle_speed(0.0)
    , vehicle_lon_acceleration(0.0)  {
    }
  VehicleDynamicState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vehicle_speed(0.0)
    , vehicle_lon_acceleration(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _vehicle_speed_type;
  _vehicle_speed_type vehicle_speed;

   typedef double _vehicle_lon_acceleration_type;
  _vehicle_lon_acceleration_type vehicle_lon_acceleration;





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
    lhs.vehicle_speed == rhs.vehicle_speed &&
    lhs.vehicle_lon_acceleration == rhs.vehicle_lon_acceleration;
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
    return "156d2fe6b2b7a496f295863b8c3741b1";
  }

  static const char* value(const ::common_msgs::VehicleDynamicState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x156d2fe6b2b7a496ULL;
  static const uint64_t static_value2 = 0xf295863b8c3741b1ULL;
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
"float64 vehicle_speed\n"
"float64 vehicle_lon_acceleration\n"
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
      stream.next(m.vehicle_speed);
      stream.next(m.vehicle_lon_acceleration);
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
    s << indent << "vehicle_speed: ";
    Printer<double>::stream(s, indent + "  ", v.vehicle_speed);
    s << indent << "vehicle_lon_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.vehicle_lon_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_MSGS_MESSAGE_VEHICLEDYNAMICSTATE_H
