; Auto-generated. Do not edit!


(cl:in-package deltaRobotNode-srv)


;//! \htmlinclude Calibrate-request.msg.html

(cl:defclass <Calibrate-request> (roslisp-msg-protocol:ros-message)
  ((calibration
    :reader calibration
    :initarg :calibration
    :type deltaRobotNode-msg:Calibration
    :initform (cl:make-instance 'deltaRobotNode-msg:Calibration)))
)

(cl:defclass Calibrate-request (<Calibrate-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Calibrate-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Calibrate-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<Calibrate-request> is deprecated: use deltaRobotNode-srv:Calibrate-request instead.")))

(cl:ensure-generic-function 'calibration-val :lambda-list '(m))
(cl:defmethod calibration-val ((m <Calibrate-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:calibration-val is deprecated.  Use deltaRobotNode-srv:calibration instead.")
  (calibration m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Calibrate-request>) ostream)
  "Serializes a message object of type '<Calibrate-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'calibration) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Calibrate-request>) istream)
  "Deserializes a message object of type '<Calibrate-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'calibration) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Calibrate-request>)))
  "Returns string type for a service object of type '<Calibrate-request>"
  "deltaRobotNode/CalibrateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Calibrate-request)))
  "Returns string type for a service object of type 'Calibrate-request"
  "deltaRobotNode/CalibrateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Calibrate-request>)))
  "Returns md5sum for a message object of type '<Calibrate-request>"
  "8b352746ead2ead0ba4aacd1933e23bc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Calibrate-request)))
  "Returns md5sum for a message object of type 'Calibrate-request"
  "8b352746ead2ead0ba4aacd1933e23bc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Calibrate-request>)))
  "Returns full string definition for message of type '<Calibrate-request>"
  (cl:format cl:nil "Calibration calibration~%~%================================================================================~%MSG: deltaRobotNode/Calibration~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Calibrate-request)))
  "Returns full string definition for message of type 'Calibrate-request"
  (cl:format cl:nil "Calibration calibration~%~%================================================================================~%MSG: deltaRobotNode/Calibration~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Calibrate-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'calibration))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Calibrate-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Calibrate-request
    (cl:cons ':calibration (calibration msg))
))
;//! \htmlinclude Calibrate-response.msg.html

(cl:defclass <Calibrate-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Calibrate-response (<Calibrate-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Calibrate-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Calibrate-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name deltaRobotNode-srv:<Calibrate-response> is deprecated: use deltaRobotNode-srv:Calibrate-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <Calibrate-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader deltaRobotNode-srv:succeeded-val is deprecated.  Use deltaRobotNode-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Calibrate-response>) ostream)
  "Serializes a message object of type '<Calibrate-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Calibrate-response>) istream)
  "Deserializes a message object of type '<Calibrate-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Calibrate-response>)))
  "Returns string type for a service object of type '<Calibrate-response>"
  "deltaRobotNode/CalibrateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Calibrate-response)))
  "Returns string type for a service object of type 'Calibrate-response"
  "deltaRobotNode/CalibrateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Calibrate-response>)))
  "Returns md5sum for a message object of type '<Calibrate-response>"
  "8b352746ead2ead0ba4aacd1933e23bc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Calibrate-response)))
  "Returns md5sum for a message object of type 'Calibrate-response"
  "8b352746ead2ead0ba4aacd1933e23bc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Calibrate-response>)))
  "Returns full string definition for message of type '<Calibrate-response>"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Calibrate-response)))
  "Returns full string definition for message of type 'Calibrate-response"
  (cl:format cl:nil "bool succeeded~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Calibrate-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Calibrate-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Calibrate-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Calibrate)))
  'Calibrate-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Calibrate)))
  'Calibrate-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Calibrate)))
  "Returns string type for a service object of type '<Calibrate>"
  "deltaRobotNode/Calibrate")