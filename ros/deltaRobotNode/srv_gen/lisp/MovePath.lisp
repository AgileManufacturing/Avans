; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-srv)


;//! \htmlinclude MovePath-request.msg.html

(cl:defclass <MovePath-request> (roslisp-msg-protocol:ros-message)
  ((motion
    :reader motion
    :initarg :motion
    :type (cl:vector deltaRobotNode-msg:Motion)
   :initform (cl:make-array 0 :element-type 'deltaRobotNode-msg:Motion :initial-element (cl:make-instance 'deltaRobotNode-msg:Motion))))
)

(cl:defclass MovePath-request (<MovePath-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MovePath-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MovePath-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MovePath-request> is deprecated: use deltaRobotNode-srv:MovePath-request instead.")))

(cl:ensure-generic-function 'motion-val :lambda-list '(m))
(cl:defmethod motion-val ((m <MovePath-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:motion-val is deprecated.  Use deltaRobotNode-srv:motion instead.")
  (motion m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MovePath-request>) ostream)
  "Serializes a message object of type '<MovePath-request>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motion))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'motion))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MovePath-request>) istream)
  "Deserializes a message object of type '<MovePath-request>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'motion) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'motion)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'deltaRobotNode-msg:Motion))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MovePath-request>)))
  "Returns string type for a service object of type '<MovePath-request>"
  "deltaRobotNode/MovePathRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MovePath-request)))
  "Returns string type for a service object of type 'MovePath-request"
  "deltaRobotNode/MovePathRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MovePath-request>)))
  "Returns md5sum for a message object of type '<MovePath-request>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MovePath-request)))
  "Returns md5sum for a message object of type 'MovePath-request"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MovePath-request>)))
  "Returns full string definition for message of type '<MovePath-request>"
  (cl:format cl:nil "Motion[] motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MovePath-request)))
  "Returns full string definition for message of type 'MovePath-request"
  (cl:format cl:nil "Motion[] motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MovePath-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motion) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MovePath-request>))
  "Converts a ROS message object to a list"
  (cl:list 'MovePath-request
    (cl:cons ':motion (motion msg))
))
;//! \htmlinclude MovePath-response.msg.html

(cl:defclass <MovePath-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MovePath-response (<MovePath-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MovePath-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MovePath-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MovePath-response> is deprecated: use deltaRobotNode-srv:MovePath-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <MovePath-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:succeeded-val is deprecated.  Use deltaRobotNode-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MovePath-response>) ostream)
  "Serializes a message object of type '<MovePath-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MovePath-response>) istream)
  "Deserializes a message object of type '<MovePath-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MovePath-response>)))
  "Returns string type for a service object of type '<MovePath-response>"
  "deltaRobotNode/MovePathResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MovePath-response)))
  "Returns string type for a service object of type 'MovePath-response"
  "deltaRobotNode/MovePathResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MovePath-response>)))
  "Returns md5sum for a message object of type '<MovePath-response>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MovePath-response)))
  "Returns md5sum for a message object of type 'MovePath-response"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MovePath-response>)))
  "Returns full string definition for message of type '<MovePath-response>"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MovePath-response)))
  "Returns full string definition for message of type 'MovePath-response"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MovePath-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MovePath-response>))
  "Converts a ROS message object to a list"
  (cl:list 'MovePath-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'MovePath)))
  'MovePath-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'MovePath)))
  'MovePath-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MovePath)))
  "Returns string type for a service object of type '<MovePath>"
  "deltaRobotNode/MovePath")