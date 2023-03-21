// Generated by gencpp from file autoware_config_msgs/ConfigDistanceFilter.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGDISTANCEFILTER_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGDISTANCEFILTER_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigDistanceFilter_
{
  typedef ConfigDistanceFilter_<ContainerAllocator> Type;

  ConfigDistanceFilter_()
    : sample_num(0)
    , measurement_range(0.0)  {
    }
  ConfigDistanceFilter_(const ContainerAllocator& _alloc)
    : sample_num(0)
    , measurement_range(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _sample_num_type;
  _sample_num_type sample_num;

   typedef float _measurement_range_type;
  _measurement_range_type measurement_range;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigDistanceFilter_

typedef ::autoware_config_msgs::ConfigDistanceFilter_<std::allocator<void> > ConfigDistanceFilter;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigDistanceFilter > ConfigDistanceFilterPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigDistanceFilter const> ConfigDistanceFilterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator1> & lhs, const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator2> & rhs)
{
  return lhs.sample_num == rhs.sample_num &&
    lhs.measurement_range == rhs.measurement_range;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator1> & lhs, const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c62131ed7d7074af43c78ec79a1aa05";
  }

  static const char* value(const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c62131ed7d7074aULL;
  static const uint64_t static_value2 = 0xf43c78ec79a1aa05ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigDistanceFilter";
  }

  static const char* value(const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 sample_num\n"
"float32 measurement_range\n"
;
  }

  static const char* value(const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sample_num);
      stream.next(m.measurement_range);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigDistanceFilter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigDistanceFilter_<ContainerAllocator>& v)
  {
    s << indent << "sample_num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sample_num);
    s << indent << "measurement_range: ";
    Printer<float>::stream(s, indent + "  ", v.measurement_range);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGDISTANCEFILTER_H
