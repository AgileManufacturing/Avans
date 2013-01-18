; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-srv)


;//! \htmlinclude MoveRelativePath-request.msg.html

(cl:defclass <MoveRelativePath-request> (roslisp-msg-protocol:ros-message)
  ((motion
    :reader motion
    :initarg :motion
    :type (cl:vector deltaRobotNode-msg:Motion)
   :initform (cl:make-array 0 :element-type 'deltaRobotNode-msg:Motion :initial-element (cl:make-instance 'deltaRobotNode-msg:Motion))))
)

(cl:defclass MoveRelativePath-request (<MoveRelativePath-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveRelativePath-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveRelativePath-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MoveRelativePath-request> is deprecated: use deltaRobotNode-srv:MoveRelativePath-request instead.")))

(cl:ensure-generic-function 'motion-val :lambda-list '(m))
(cl:defmethod motion-val ((m <MoveRelativePath-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:motion-val is deprecated.  Use deltaRobotNode-srv:motion instead.")
  (motion m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveRelativePath-request>) ostream)
  "Serializes a message object of type '<MoveRelativePath-request>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motion))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'motion))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveRelativePath-request>) istream)
  "Deserializes a message object of type '<MoveRelativePath-request>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveRelativePath-request>)))
  "Returns string type for a service object of type '<MoveRelativePath-request>"
  "deltaRobotNode/MoveRelativePathRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveRelativePath-request)))
  "Returns string type for a service object of type 'MoveRelativePath-request"
  "deltaRobotNode/MoveRelativePathRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveRelativePath-request>)))
  "Returns md5sum for a message object of type '<MoveRelativePath-request>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveRelativePath-request)))
  "Returns md5sum for a message object of type 'MoveRelativePath-request"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveRelativePath-request>)))
  "Returns full string definition for message of type '<MoveRelativePath-request>"
  (cl:format cl:nil "Motion[] motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveRelativePath-request)))
  "Returns full string definition for message of type 'MoveRelativePath-request"
  (cl:format cl:nil "Motion[] motion~%~%================================================================================~%MSG: deltaRobotNode/Motion~%float64 x~%float64 y~%float64 z~%float64 speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveRelativePath-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motion) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveRelativePath-request>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveRelativePath-request
    (cl:cons ':motion (motion msg))
))
;//! \htmlinclude MoveRelativePath-response.msg.html

(cl:defclass <MoveRelativePath-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MoveRelativePath-response (<MoveRelativePath-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveRelativePath-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveRelativePath-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<MoveRelativePath-response> is deprecated: use deltaRobotNode-srv:MoveRelativePath-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <MoveRelativePath-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:succeeded-val is deprecated.  Use deltaRobotNode-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveRelativePath-response>) ostream)
  "Serializes a message object of type '<MoveRelativePath-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveRelativePath-response>) istream)
  "Deserializes a message object of type '<MoveRelativePath-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveRelativePath-response>)))
  "Returns string type for a service object of type '<MoveRelativePath-response>"
  "deltaRobotNode/MoveRelativePathResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveRelativePath-response)))
  "Returns string type for a service object of type 'MoveRelativePath-response"
  "deltaRobotNode/MoveRelativePathResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveRelativePath-response>)))
  "Returns md5sum for a message object of type '<MoveRelativePath-response>"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveRelativePath-response)))
  "Returns md5sum for a message object of type 'MoveRelativePath-response"
  "e333d572d6da71847017b8df0bfa52b4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveRelativePath-response>)))
  "Returns full string definition for message of type '<MoveRelativePath-response>"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveRelativePath-response)))
  "Returns full string definition for message of type 'MoveRelativePath-response"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveRelativePath-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveRelativePath-response>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveRelativePath-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'MoveRelativePath)))
  'MoveRelativePath-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'MoveRelativePath)))
  'MoveRelativePath-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveRelativePath)))
  "Returns string type for a service object of type '<MoveRelativePath>"
  "deltaRobotNode/MoveRelativePath")