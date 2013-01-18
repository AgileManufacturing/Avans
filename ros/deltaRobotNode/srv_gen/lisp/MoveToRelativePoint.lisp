; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-srv)


;//! \htmlinclude MoveToRelativePoint-request.msg.html

(cl:defclass <MoveToRelativePoint-request> (roslisp-msg-protocol:ros-message)
  ((motion
    :reader motion
    :initarg :motion
    :type deltaRobotNode-msg:Motion
    :initform (cl:make-instance 'deltaRobotNode-msg:Motion)))
)

(cl:defclass MoveToRelativePoint-request (<MoveToRelativePoint-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveToRelativePoint-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveToRelativePoint-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MoveToRelativePoint-request> is deprecated: use deltaRobotNode-srv:MoveToRelativePoint-request instead.")))

(cl:ensure-generic-function 'motion-val :lambda-list '(m))
(cl:defmethod motion-val ((m <MoveToRelativePoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:motion-val is deprecated.  Use deltaRobotNode-srv:motion instead.")
  (motion m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveToRelativePoint-request>) ostream)
  "Serializes a message object of type '<MoveToRelativePoint-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'motion) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveToRelativePoint-request>) istream)
  "Deserializes a message object of type '<MoveToRelativePoint-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'motion) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveToRelativePoint-request>)))
  "Returns string type for a service object of type '<MoveToRelativePoint-request>"
  "deltaRobotNode/MoveToRelativePointRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToRelativePoint-request)))
  "Returns string type for a service object of type 'MoveToRelativePoint-request"
  "deltaRobotNode/MoveToRelativePointRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveToRelativePoint-request>)))
  "Returns md5sum for a message object of type '<MoveToRelativePoint-request>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveToRelativePoint-request)))
  "Returns md5sum for a message object of type 'MoveToRelativePoint-request"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveToRelativePoint-request>)))
  "Returns full string definition for message of type '<MoveToRelativePoint-request>"
  (cl:format cl:nil "Motion motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveToRelativePoint-request)))
  "Returns full string definition for message of type 'MoveToRelativePoint-request"
  (cl:format cl:nil "Motion motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveToRelativePoint-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'motion))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveToRelativePoint-request>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveToRelativePoint-request
    (cl:cons ':motion (motion msg))
))
;//! \htmlinclude MoveToRelativePoint-response.msg.html

(cl:defclass <MoveToRelativePoint-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MoveToRelativePoint-response (<MoveToRelativePoint-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveToRelativePoint-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveToRelativePoint-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MoveToRelativePoint-response> is deprecated: use deltaRobotNode-srv:MoveToRelativePoint-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <MoveToRelativePoint-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:succeeded-val is deprecated.  Use deltaRobotNode-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveToRelativePoint-response>) ostream)
  "Serializes a message object of type '<MoveToRelativePoint-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveToRelativePoint-response>) istream)
  "Deserializes a message object of type '<MoveToRelativePoint-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveToRelativePoint-response>)))
  "Returns string type for a service object of type '<MoveToRelativePoint-response>"
  "deltaRobotNode/MoveToRelativePointResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToRelativePoint-response)))
  "Returns string type for a service object of type 'MoveToRelativePoint-response"
  "deltaRobotNode/MoveToRelativePointResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveToRelativePoint-response>)))
  "Returns md5sum for a message object of type '<MoveToRelativePoint-response>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveToRelativePoint-response)))
  "Returns md5sum for a message object of type 'MoveToRelativePoint-response"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveToRelativePoint-response>)))
  "Returns full string definition for message of type '<MoveToRelativePoint-response>"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveToRelativePoint-response)))
  "Returns full string definition for message of type 'MoveToRelativePoint-response"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveToRelativePoint-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveToRelativePoint-response>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveToRelativePoint-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'MoveToRelativePoint)))
  'MoveToRelativePoint-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'MoveToRelativePoint)))
  'MoveToRelativePoint-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToRelativePoint)))
  "Returns string type for a service object of type '<MoveToRelativePoint>"
  "deltaRobotNode/MoveToRelativePoint")