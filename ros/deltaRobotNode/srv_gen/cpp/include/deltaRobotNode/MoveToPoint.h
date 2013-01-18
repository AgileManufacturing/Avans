/* Auto-generated by genmsg_cpp for file /home/atmgast/workspace/Release1.1/ros/deltaRobotNode/srv/MoveToPoint.srv */
#ifndef DELTAROBOTNODE_SERVICE_MOVETOPOINT_H
#define DELTAROBOTNODE_SERVICE_MOVETOPOINT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "deltaRobotNode/Motion.h"



namespace deltaRobotNode
{
template <class ContainerAllocator>
struct MoveToPointRequest_ {
  typedef MoveToPointRequest_<ContainerAllocator> Type;

  MoveToPointRequest_()
  : motion()
  {
  }

  MoveToPointRequest_(const ContainerAllocator& _alloc)
  : motion(_alloc)
  {
  }

  typedef  ::deltaRobotNode::Motion_<ContainerAllocator>  _motion_type;
   ::deltaRobotNode::Motion_<ContainerAllocator>  motion;


  typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MoveToPointRequest
typedef  ::deltaRobotNode::MoveToPointRequest_<std::allocator<void> > MoveToPointRequest;

typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointRequest> MoveToPointRequestPtr;
typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointRequest const> MoveToPointRequestConstPtr;


template <class ContainerAllocator>
struct MoveToPointResponse_ {
  typedef MoveToPointResponse_<ContainerAllocator> Type;

  MoveToPointResponse_()
  : succeeded(false)
  {
  }

  MoveToPointResponse_(const ContainerAllocator& _alloc)
  : succeeded(false)
  {
  }

  typedef uint8_t _succeeded_type;
  uint8_t succeeded;


  typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MoveToPointResponse
typedef  ::deltaRobotNode::MoveToPointResponse_<std::allocator<void> > MoveToPointResponse;

typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointResponse> MoveToPointResponsePtr;
typedef boost::shared_ptr< ::deltaRobotNode::MoveToPointResponse const> MoveToPointResponseConstPtr;

struct MoveToPoint
{

typedef MoveToPointRequest Request;
typedef MoveToPointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct MoveToPoint
} // namespace deltaRobotNode

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d5e2b63c47d3ae5a19960378109d3c87";
  }

  static const char* value(const  ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd5e2b63c47d3ae5aULL;
  static const uint64_t static_value2 = 0x19960378109d3c87ULL;
};

template<class ContainerAllocator>
struct DataType< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/MoveToPointRequest";
  }

  static const char* value(const  ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Motion motion\n\
\n\
================================================================================\n\
MSG: deltaRobotNode/Motion\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 speed\n\
";
  }

  static const char* value(const  ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "95e696a0d10686913abb262e0b4cbbcf";
  }

  static const char* value(const  ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x95e696a0d1068691ULL;
  static const uint64_t static_value2 = 0x3abb262e0b4cbbcfULL;
};

template<class ContainerAllocator>
struct DataType< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/MoveToPointResponse";
  }

  static const char* value(const  ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool succeeded\n\
\n\
";
  }

  static const char* value(const  ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::deltaRobotNode::MoveToPointRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.motion);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MoveToPointRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::deltaRobotNode::MoveToPointResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.succeeded);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MoveToPointResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<deltaRobotNode::MoveToPoint> {
  static const char* value() 
  {
    return "e333d572d6da71847017b8df0bfa52b4";
  }

  static const char* value(const deltaRobotNode::MoveToPoint&) { return value(); } 
};

template<>
struct DataType<deltaRobotNode::MoveToPoint> {
  static const char* value() 
  {
    return "deltaRobotNode/MoveToPoint";
  }

  static const char* value(const deltaRobotNode::MoveToPoint&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e333d572d6da71847017b8df0bfa52b4";
  }

  static const char* value(const deltaRobotNode::MoveToPointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<deltaRobotNode::MoveToPointRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/MoveToPoint";
  }

  static const char* value(const deltaRobotNode::MoveToPointRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e333d572d6da71847017b8df0bfa52b4";
  }

  static const char* value(const deltaRobotNode::MoveToPointResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<deltaRobotNode::MoveToPointResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/MoveToPoint";
  }

  static const char* value(const deltaRobotNode::MoveToPointResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DELTAROBOTNODE_SERVICE_MOVETOPOINT_H

