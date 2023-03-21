// Generated by gencpp from file autoware_config_msgs/ConfigICP.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGICP_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGICP_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigICP_
{
  typedef ConfigICP_<ContainerAllocator> Type;

  ConfigICP_()
    : header()
    , init_pos_gnss(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , use_predict_pose(0)
    , error_threshold(0.0)
    , maximum_iterations(0)
    , transformation_epsilon(0.0)
    , max_correspondence_distance(0.0)
    , euclidean_fitness_epsilon(0.0)
    , ransac_outlier_rejection_threshold(0.0)  {
    }
  ConfigICP_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , init_pos_gnss(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , use_predict_pose(0)
    , error_threshold(0.0)
    , maximum_iterations(0)
    , transformation_epsilon(0.0)
    , max_correspondence_distance(0.0)
    , euclidean_fitness_epsilon(0.0)
    , ransac_outlier_rejection_threshold(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _init_pos_gnss_type;
  _init_pos_gnss_type init_pos_gnss;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef int32_t _use_predict_pose_type;
  _use_predict_pose_type use_predict_pose;

   typedef float _error_threshold_type;
  _error_threshold_type error_threshold;

   typedef int32_t _maximum_iterations_type;
  _maximum_iterations_type maximum_iterations;

   typedef float _transformation_epsilon_type;
  _transformation_epsilon_type transformation_epsilon;

   typedef float _max_correspondence_distance_type;
  _max_correspondence_distance_type max_correspondence_distance;

   typedef float _euclidean_fitness_epsilon_type;
  _euclidean_fitness_epsilon_type euclidean_fitness_epsilon;

   typedef float _ransac_outlier_rejection_threshold_type;
  _ransac_outlier_rejection_threshold_type ransac_outlier_rejection_threshold;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigICP_

typedef ::autoware_config_msgs::ConfigICP_<std::allocator<void> > ConfigICP;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigICP > ConfigICPPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigICP const> ConfigICPConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigICP_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autoware_config_msgs::ConfigICP_<ContainerAllocator1> & lhs, const ::autoware_config_msgs::ConfigICP_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.init_pos_gnss == rhs.init_pos_gnss &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw &&
    lhs.use_predict_pose == rhs.use_predict_pose &&
    lhs.error_threshold == rhs.error_threshold &&
    lhs.maximum_iterations == rhs.maximum_iterations &&
    lhs.transformation_epsilon == rhs.transformation_epsilon &&
    lhs.max_correspondence_distance == rhs.max_correspondence_distance &&
    lhs.euclidean_fitness_epsilon == rhs.euclidean_fitness_epsilon &&
    lhs.ransac_outlier_rejection_threshold == rhs.ransac_outlier_rejection_threshold;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autoware_config_msgs::ConfigICP_<ContainerAllocator1> & lhs, const ::autoware_config_msgs::ConfigICP_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5447e477cc209f1aaba7597ea7741dc8";
  }

  static const char* value(const ::autoware_config_msgs::ConfigICP_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5447e477cc209f1aULL;
  static const uint64_t static_value2 = 0xaba7597ea7741dc8ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigICP";
  }

  static const char* value(const ::autoware_config_msgs::ConfigICP_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 init_pos_gnss\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 roll\n"
"float32 pitch\n"
"float32 yaw\n"
"int32 use_predict_pose\n"
"float32 error_threshold\n"
"int32 maximum_iterations\n"
"float32 transformation_epsilon\n"
"float32 max_correspondence_distance\n"
"float32 euclidean_fitness_epsilon\n"
"float32 ransac_outlier_rejection_threshold\n"
"\n"
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

  static const char* value(const ::autoware_config_msgs::ConfigICP_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.init_pos_gnss);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.use_predict_pose);
      stream.next(m.error_threshold);
      stream.next(m.maximum_iterations);
      stream.next(m.transformation_epsilon);
      stream.next(m.max_correspondence_distance);
      stream.next(m.euclidean_fitness_epsilon);
      stream.next(m.ransac_outlier_rejection_threshold);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigICP_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigICP_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigICP_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "init_pos_gnss: ";
    Printer<int32_t>::stream(s, indent + "  ", v.init_pos_gnss);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "use_predict_pose: ";
    Printer<int32_t>::stream(s, indent + "  ", v.use_predict_pose);
    s << indent << "error_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.error_threshold);
    s << indent << "maximum_iterations: ";
    Printer<int32_t>::stream(s, indent + "  ", v.maximum_iterations);
    s << indent << "transformation_epsilon: ";
    Printer<float>::stream(s, indent + "  ", v.transformation_epsilon);
    s << indent << "max_correspondence_distance: ";
    Printer<float>::stream(s, indent + "  ", v.max_correspondence_distance);
    s << indent << "euclidean_fitness_epsilon: ";
    Printer<float>::stream(s, indent + "  ", v.euclidean_fitness_epsilon);
    s << indent << "ransac_outlier_rejection_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.ransac_outlier_rejection_threshold);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGICP_H
