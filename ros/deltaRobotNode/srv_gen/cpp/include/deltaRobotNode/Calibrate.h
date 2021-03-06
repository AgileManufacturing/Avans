/* Auto-generated by genmsg_cpp for file /home/atmgast/workspace/Release1.1/ros/deltaRobotNode/srv/Calibrate.srv */
#ifndef DELTAROBOTNODE_SERVICE_CALIBRATE_H
#define DELTAROBOTNODE_SERVICE_CALIBRATE_H
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

#include "deltaRobotNode/Calibration.h"



namespace deltaRobotNode
{
template <class ContainerAllocator>
struct CalibrateRequest_ {
  typedef CalibrateRequest_<ContainerAllocator> Type;

  CalibrateRequest_()
  : calibration()
  {
  }

  CalibrateRequest_(const ContainerAllocator& _alloc)
  : calibration(_alloc)
  {
  }

  typedef  ::deltaRobotNode::Calibration_<ContainerAllocator>  _calibration_type;
   ::deltaRobotNode::Calibration_<ContainerAllocator>  calibration;


  typedef boost::shared_ptr< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateRequest
typedef  ::deltaRobotNode::CalibrateRequest_<std::allocator<void> > CalibrateRequest;

typedef boost::shared_ptr< ::deltaRobotNode::CalibrateRequest> CalibrateRequestPtr;
typedef boost::shared_ptr< ::deltaRobotNode::CalibrateRequest const> CalibrateRequestConstPtr;


template <class ContainerAllocator>
struct CalibrateResponse_ {
  typedef CalibrateResponse_<ContainerAllocator> Type;

  CalibrateResponse_()
  : succeeded(false)
  {
  }

  CalibrateResponse_(const ContainerAllocator& _alloc)
  : succeeded(false)
  {
  }

  typedef uint8_t _succeeded_type;
  uint8_t succeeded;


  typedef boost::shared_ptr< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateResponse
typedef  ::deltaRobotNode::CalibrateResponse_<std::allocator<void> > CalibrateResponse;

typedef boost::shared_ptr< ::deltaRobotNode::CalibrateResponse> CalibrateResponsePtr;
typedef boost::shared_ptr< ::deltaRobotNode::CalibrateResponse const> CalibrateResponseConstPtr;

struct Calibrate
{

typedef CalibrateRequest Request;
typedef CalibrateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Calibrate
} // namespace deltaRobotNode

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5a3fe748ef8f2b961e27dcb8ac3df828";
  }

  static const char* value(const  ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5a3fe748ef8f2b96ULL;
  static const uint64_t static_value2 = 0x1e27dcb8ac3df828ULL;
};

template<class ContainerAllocator>
struct DataType< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/CalibrateRequest";
  }

  static const char* value(const  ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Calibration calibration\n\
\n\
================================================================================\n\
MSG: deltaRobotNode/Calibration\n\
\n\
";
  }

  static const char* value(const  ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "95e696a0d10686913abb262e0b4cbbcf";
  }

  static const char* value(const  ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x95e696a0d1068691ULL;
  static const uint64_t static_value2 = 0x3abb262e0b4cbbcfULL;
};

template<class ContainerAllocator>
struct DataType< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/CalibrateResponse";
  }

  static const char* value(const  ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool succeeded\n\
\n\
";
  }

  static const char* value(const  ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::deltaRobotNode::CalibrateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.calibration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::deltaRobotNode::CalibrateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.succeeded);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<deltaRobotNode::Calibrate> {
  static const char* value() 
  {
    return "8b352746ead2ead0ba4aacd1933e23bc";
  }

  static const char* value(const deltaRobotNode::Calibrate&) { return value(); } 
};

template<>
struct DataType<deltaRobotNode::Calibrate> {
  static const char* value() 
  {
    return "deltaRobotNode/Calibrate";
  }

  static const char* value(const deltaRobotNode::Calibrate&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<deltaRobotNode::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8b352746ead2ead0ba4aacd1933e23bc";
  }

  static const char* value(const deltaRobotNode::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<deltaRobotNode::CalibrateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/Calibrate";
  }

  static const char* value(const deltaRobotNode::CalibrateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<deltaRobotNode::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8b352746ead2ead0ba4aacd1933e23bc";
  }

  static const char* value(const deltaRobotNode::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<deltaRobotNode::CalibrateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "deltaRobotNode/Calibrate";
  }

  static const char* value(const deltaRobotNode::CalibrateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DELTAROBOTNODE_SERVICE_CALIBRATE_H

