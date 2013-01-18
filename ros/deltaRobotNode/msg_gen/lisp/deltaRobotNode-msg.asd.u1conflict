
(cl:in-package :asdf)

(defsystem "deltaRobotNode-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Calibration" :depends-on ("_package_Calibration"))
    (:file "_package_Calibration" :depends-on ("_package"))
    (:file "TCPOffset" :depends-on ("_package_TCPOffset"))
    (:file "_package_TCPOffset" :depends-on ("_package"))
    (:file "Motion" :depends-on ("_package_Motion"))
    (:file "_package_Motion" :depends-on ("_package"))
  ))