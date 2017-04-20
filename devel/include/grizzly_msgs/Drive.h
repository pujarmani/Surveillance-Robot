// Generated by gencpp from file grizzly_msgs/Drive.msg
// DO NOT EDIT!


#ifndef GRIZZLY_MSGS_MESSAGE_DRIVE_H
#define GRIZZLY_MSGS_MESSAGE_DRIVE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace grizzly_msgs
{
template <class ContainerAllocator>
struct Drive_
{
  typedef Drive_<ContainerAllocator> Type;

  Drive_()
    : header()
    , front_left(0.0)
    , front_right(0.0)
    , rear_left(0.0)
    , rear_right(0.0)  {
    }
  Drive_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , front_left(0.0)
    , front_right(0.0)
    , rear_left(0.0)
    , rear_right(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _front_left_type;
  _front_left_type front_left;

   typedef float _front_right_type;
  _front_right_type front_right;

   typedef float _rear_left_type;
  _rear_left_type rear_left;

   typedef float _rear_right_type;
  _rear_right_type rear_right;




  typedef boost::shared_ptr< ::grizzly_msgs::Drive_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grizzly_msgs::Drive_<ContainerAllocator> const> ConstPtr;

}; // struct Drive_

typedef ::grizzly_msgs::Drive_<std::allocator<void> > Drive;

typedef boost::shared_ptr< ::grizzly_msgs::Drive > DrivePtr;
typedef boost::shared_ptr< ::grizzly_msgs::Drive const> DriveConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grizzly_msgs::Drive_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grizzly_msgs::Drive_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grizzly_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'grizzly_msgs': ['/home/manikanta/catkin_ws/src/grizzly/grizzly_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grizzly_msgs::Drive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grizzly_msgs::Drive_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grizzly_msgs::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grizzly_msgs::Drive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grizzly_msgs::Drive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grizzly_msgs::Drive_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grizzly_msgs::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2c91f746e5d8bec139c834f92ac7468";
  }

  static const char* value(const ::grizzly_msgs::Drive_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2c91f746e5d8becULL;
  static const uint64_t static_value2 = 0x139c834f92ac7468ULL;
};

template<class ContainerAllocator>
struct DataType< ::grizzly_msgs::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grizzly_msgs/Drive";
  }

  static const char* value(const ::grizzly_msgs::Drive_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grizzly_msgs::Drive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Desired wheel speed, in rad/s.\n\
# Positive is rotation which propels Grizzly forward.\n\
float32 front_left\n\
float32 front_right\n\
float32 rear_left\n\
float32 rear_right\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::grizzly_msgs::Drive_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grizzly_msgs::Drive_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.front_left);
      stream.next(m.front_right);
      stream.next(m.rear_left);
      stream.next(m.rear_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Drive_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grizzly_msgs::Drive_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grizzly_msgs::Drive_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "front_left: ";
    Printer<float>::stream(s, indent + "  ", v.front_left);
    s << indent << "front_right: ";
    Printer<float>::stream(s, indent + "  ", v.front_right);
    s << indent << "rear_left: ";
    Printer<float>::stream(s, indent + "  ", v.rear_left);
    s << indent << "rear_right: ";
    Printer<float>::stream(s, indent + "  ", v.rear_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRIZZLY_MSGS_MESSAGE_DRIVE_H