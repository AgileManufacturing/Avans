; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-msg)


;//! \htmlinclude Calibration.msg.html

(cl:defclass <Calibration> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass Calibration (<Calibration>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Calibration>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Calibration)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-msg:<Calibration> is deprecated: use deltaRobotNode-msg:Calibration instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Calibration>) ostream)
  "Serializes a message object of type '<Calibration>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Calibration>) istream)
  "Deserializes a message object of type '<Calibration>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Calibration>)))
  "Returns string type for a message object of type '<Calibration>"
  "deltaRobotNode/Calibration")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Calibration)))
  "Returns string type for a message object of type 'Calibration"
  "deltaRobotNode/Calibration")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Calibration>)))
  "Returns md5sum for a message object of type '<Calibration>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Calibration)))
  "Returns md5sum for a message object of type 'Calibration"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Calibration>)))
  "Returns full string definition for message of type '<Calibration>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Calibration)))
  "Returns full string definition for message of type 'Calibration"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Calibration>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Calibration>))
  "Converts a ROS message object to a list"
  (cl:list 'Calibration
))
