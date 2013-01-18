; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-srv)


;//! \htmlinclude DefineTCP-request.msg.html

(cl:defclass <DefineTCP-request> (roslisp-msg-protocol:ros-message)
  ((tcpoffset
    :reader tcpoffset
    :initarg :tcpoffset
    :type deltaRobotNode-msg:TCPOffset
    :initform (cl:make-instance 'deltaRobotNode-msg:TCPOffset)))
)

(cl:defclass DefineTCP-request (<DefineTCP-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DefineTCP-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DefineTCP-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<DefineTCP-request> is deprecated: use deltaRobotNode-srv:DefineTCP-request instead.")))

(cl:ensure-generic-function 'tcpoffset-val :lambda-list '(m))
(cl:defmethod tcpoffset-val ((m <DefineTCP-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:tcpoffset-val is deprecated.  Use deltaRobotNode-srv:tcpoffset instead.")
  (tcpoffset m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DefineTCP-request>) ostream)
  "Serializes a message object of type '<DefineTCP-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'tcpoffset) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DefineTCP-request>) istream)
  "Deserializes a message object of type '<DefineTCP-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'tcpoffset) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DefineTCP-request>)))
  "Returns string type for a service object of type '<DefineTCP-request>"
  "deltaRobotNode/DefineTCPRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DefineTCP-request)))
  "Returns string type for a service object of type 'DefineTCP-request"
  "deltaRobotNode/DefineTCPRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DefineTCP-request>)))
  "Returns md5sum for a message object of type '<DefineTCP-request>"
  "cde08577d8756c3529f90ce485b43c0c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DefineTCP-request)))
  "Returns md5sum for a message object of type 'DefineTCP-request"
  "cde08577d8756c3529f90ce485b43c0c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DefineTCP-request>)))
  "Returns full string definition for message of type '<DefineTCP-request>"
  (cl:format cl:nil "TCPOffset tcpoffset~%~%================================================================================~%MSG: deltaRobotNode/TCPOffset~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DefineTCP-request)))
  "Returns full string definition for message of type 'DefineTCP-request"
  (cl:format cl:nil "TCPOffset tcpoffset~%~%================================================================================~%MSG: deltaRobotNode/TCPOffset~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DefineTCP-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'tcpoffset))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DefineTCP-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DefineTCP-request
    (cl:cons ':tcpoffset (tcpoffset msg))
))
;//! \htmlinclude DefineTCP-response.msg.html

(cl:defclass <DefineTCP-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass DefineTCP-response (<DefineTCP-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DefineTCP-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DefineTCP-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<DefineTCP-response> is deprecated: use deltaRobotNode-srv:DefineTCP-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <DefineTCP-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:succeeded-val is deprecated.  Use deltaRobotNode-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DefineTCP-response>) ostream)
  "Serializes a message object of type '<DefineTCP-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DefineTCP-response>) istream)
  "Deserializes a message object of type '<DefineTCP-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DefineTCP-response>)))
  "Returns string type for a service object of type '<DefineTCP-response>"
  "deltaRobotNode/DefineTCPResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DefineTCP-response)))
  "Returns string type for a service object of type 'DefineTCP-response"
  "deltaRobotNode/DefineTCPResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DefineTCP-response>)))
  "Returns md5sum for a message object of type '<DefineTCP-response>"
  "cde08577d8756c3529f90ce485b43c0c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DefineTCP-response)))
  "Returns md5sum for a message object of type 'DefineTCP-response"
  "cde08577d8756c3529f90ce485b43c0c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DefineTCP-response>)))
  "Returns full string definition for message of type '<DefineTCP-response>"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DefineTCP-response)))
  "Returns full string definition for message of type 'DefineTCP-response"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DefineTCP-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DefineTCP-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DefineTCP-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DefineTCP)))
  'DefineTCP-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DefineTCP)))
  'DefineTCP-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DefineTCP)))
  "Returns string type for a service object of type '<DefineTCP>"
  "deltaRobotNode/DefineTCP")