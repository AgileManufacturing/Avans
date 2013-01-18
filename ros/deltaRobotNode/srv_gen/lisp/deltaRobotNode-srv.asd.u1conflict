
(cl:in-package :asdf)

(defsystem "deltaRobotNode-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :deltaRobotNode-msg
)
  :components ((:file "_package")
    (:file "MoveToPoint" :depends-on ("_package_MoveToPoint"))
    (:file "_package_MoveToPoint" :depends-on ("_package"))
    (:file "DefineTCP" :depends-on ("_package_DefineTCP"))
    (:file "_package_DefineTCP" :depends-on ("_package"))
    (:file "MoveToRelativePoint" :depends-on ("_package_MoveToRelativePoint"))
    (:file "_package_MoveToRelativePoint" :depends-on ("_package"))
    (:file "MovePath" :depends-on ("_package_MovePath"))
    (:file "_package_MovePath" :depends-on ("_package"))
    (:file "MoveRelativePath" :depends-on ("_package_MoveRelativePath"))
    (:file "_package_MoveRelativePath" :depends-on ("_package"))
    (:file "Calibrate" :depends-on ("_package_Calibrate"))
    (:file "_package_Calibrate" :depends-on ("_package"))
  ))