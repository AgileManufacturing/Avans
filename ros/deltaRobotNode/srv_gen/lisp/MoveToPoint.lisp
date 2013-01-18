; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-srv)


;//! \htmlinclude MoveToPoint-request.msg.html

(cl:defclass <MoveToPoint-request> (roslisp-msg-protocol:ros-message)
  ((motion
    :reader motion
    :initarg :motion
    :type deltaRobotNode-msg:Motion
    :initform (cl:make-instance 'deltaRobotNode-msg:Motion)))
)

(cl:defclass MoveToPoint-request (<MoveToPoint-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveToPoint-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveToPoint-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MoveToPoint-request> is deprecated: use deltaRobotNode-srv:MoveToPoint-request instead.")))

(cl:ensure-generic-function 'motion-val :lambda-list '(m))
(cl:defmethod motion-val ((m <MoveToPoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:motion-val is deprecated.  Use deltaRobotNode-srv:motion instead.")
  (motion m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveToPoint-request>) ostream)
  "Serializes a message object of type '<MoveToPoint-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'motion) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveToPoint-request>) istream)
  "Deserializes a message object of type '<MoveToPoint-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'motion) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveToPoint-request>)))
  "Returns string type for a service object of type '<MoveToPoint-request>"
  "deltaRobotNode/MoveToPointRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToPoint-request)))
  "Returns string type for a service object of type 'MoveToPoint-request"
  "deltaRobotNode/MoveToPointRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveToPoint-request>)))
  "Returns md5sum for a message object of type '<MoveToPoint-request>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveToPoint-request)))
  "Returns md5sum for a message object of type 'MoveToPoint-request"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveToPoint-request>)))
  "Returns full string definition for message of type '<MoveToPoint-request>"
  (cl:format cl:nil "Motion motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveToPoint-request)))
  "Returns full string definition for message of type 'MoveToPoint-request"
  (cl:format cl:nil "Motion motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveToPoint-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'motion))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveToPoint-request>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveToPoint-request
    (cl:cons ':motion (motion msg))
))
;//! \htmlinclude MoveToPoint-response.msg.html

(cl:defclass <MoveToPoint-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MoveToPoint-response (<MoveToPoint-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveToPoint-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveToPoint-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MoveToPoint-response> is deprecated: use deltaRobotNode-srv:MoveToPoint-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <MoveToPoint-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:succeeded-val is deprecated.  Use deltaRobotNode-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveToPoint-response>) ostream)
  "Serializes a message object of type '<MoveToPoint-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveToPoint-response>) istream)
  "Deserializes a message object of type '<MoveToPoint-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveToPoint-response>)))
  "Returns string type for a service object of type '<MoveToPoint-response>"
  "deltaRobotNode/MoveToPointResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToPoint-response)))
  "Returns string type for a service object of type 'MoveToPoint-response"
  "deltaRobotNode/MoveToPointResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveToPoint-response>)))
  "Returns md5sum for a message object of type '<MoveToPoint-response>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveToPoint-response)))
  "Returns md5sum for a message object of type 'MoveToPoint-response"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveToPoint-response>)))
  "Returns full string definition for message of type '<MoveToPoint-response>"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveToPoint-response)))
  "Returns full string definition for message of type 'MoveToPoint-response"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveToPoint-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveToPoint-response>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveToPoint-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'MoveToPoint)))
  'MoveToPoint-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'MoveToPoint)))
  'MoveToPoint-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToPoint)))
  "Returns string type for a service object of type '<MoveToPoint>"
  "deltaRobotNode/MoveToPoint")