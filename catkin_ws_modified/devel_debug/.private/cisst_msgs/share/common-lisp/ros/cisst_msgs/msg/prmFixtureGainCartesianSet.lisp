; Auto-generated. Do not edit!


(cl:in-package cisst_msgs-msg)


;//! \htmlinclude prmFixtureGainCartesianSet.msg.html

(cl:defclass <prmFixtureGainCartesianSet> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (ForceOrientation
    :reader ForceOrientation
    :initarg :ForceOrientation
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion))
   (ForcePosition
    :reader ForcePosition
    :initarg :ForcePosition
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (TorqueOrientation
    :reader TorqueOrientation
    :initarg :TorqueOrientation
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion))
   (PosStiffPos
    :reader PosStiffPos
    :initarg :PosStiffPos
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (PosStiffNeg
    :reader PosStiffNeg
    :initarg :PosStiffNeg
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (PosDampingPos
    :reader PosDampingPos
    :initarg :PosDampingPos
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (PosDampingNeg
    :reader PosDampingNeg
    :initarg :PosDampingNeg
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (ForceBiasPos
    :reader ForceBiasPos
    :initarg :ForceBiasPos
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (ForceBiasNeg
    :reader ForceBiasNeg
    :initarg :ForceBiasNeg
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (OriStiffPos
    :reader OriStiffPos
    :initarg :OriStiffPos
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (OriStiffNeg
    :reader OriStiffNeg
    :initarg :OriStiffNeg
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (OriDampingPos
    :reader OriDampingPos
    :initarg :OriDampingPos
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (OriDampingNeg
    :reader OriDampingNeg
    :initarg :OriDampingNeg
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (TorqueBiasPos
    :reader TorqueBiasPos
    :initarg :TorqueBiasPos
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (TorqueBiasNeg
    :reader TorqueBiasNeg
    :initarg :TorqueBiasNeg
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3)))
)

(cl:defclass prmFixtureGainCartesianSet (<prmFixtureGainCartesianSet>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <prmFixtureGainCartesianSet>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'prmFixtureGainCartesianSet)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cisst_msgs-msg:<prmFixtureGainCartesianSet> is deprecated: use cisst_msgs-msg:prmFixtureGainCartesianSet instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:header-val is deprecated.  Use cisst_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'ForceOrientation-val :lambda-list '(m))
(cl:defmethod ForceOrientation-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:ForceOrientation-val is deprecated.  Use cisst_msgs-msg:ForceOrientation instead.")
  (ForceOrientation m))

(cl:ensure-generic-function 'ForcePosition-val :lambda-list '(m))
(cl:defmethod ForcePosition-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:ForcePosition-val is deprecated.  Use cisst_msgs-msg:ForcePosition instead.")
  (ForcePosition m))

(cl:ensure-generic-function 'TorqueOrientation-val :lambda-list '(m))
(cl:defmethod TorqueOrientation-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:TorqueOrientation-val is deprecated.  Use cisst_msgs-msg:TorqueOrientation instead.")
  (TorqueOrientation m))

(cl:ensure-generic-function 'PosStiffPos-val :lambda-list '(m))
(cl:defmethod PosStiffPos-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:PosStiffPos-val is deprecated.  Use cisst_msgs-msg:PosStiffPos instead.")
  (PosStiffPos m))

(cl:ensure-generic-function 'PosStiffNeg-val :lambda-list '(m))
(cl:defmethod PosStiffNeg-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:PosStiffNeg-val is deprecated.  Use cisst_msgs-msg:PosStiffNeg instead.")
  (PosStiffNeg m))

(cl:ensure-generic-function 'PosDampingPos-val :lambda-list '(m))
(cl:defmethod PosDampingPos-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:PosDampingPos-val is deprecated.  Use cisst_msgs-msg:PosDampingPos instead.")
  (PosDampingPos m))

(cl:ensure-generic-function 'PosDampingNeg-val :lambda-list '(m))
(cl:defmethod PosDampingNeg-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:PosDampingNeg-val is deprecated.  Use cisst_msgs-msg:PosDampingNeg instead.")
  (PosDampingNeg m))

(cl:ensure-generic-function 'ForceBiasPos-val :lambda-list '(m))
(cl:defmethod ForceBiasPos-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:ForceBiasPos-val is deprecated.  Use cisst_msgs-msg:ForceBiasPos instead.")
  (ForceBiasPos m))

(cl:ensure-generic-function 'ForceBiasNeg-val :lambda-list '(m))
(cl:defmethod ForceBiasNeg-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:ForceBiasNeg-val is deprecated.  Use cisst_msgs-msg:ForceBiasNeg instead.")
  (ForceBiasNeg m))

(cl:ensure-generic-function 'OriStiffPos-val :lambda-list '(m))
(cl:defmethod OriStiffPos-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:OriStiffPos-val is deprecated.  Use cisst_msgs-msg:OriStiffPos instead.")
  (OriStiffPos m))

(cl:ensure-generic-function 'OriStiffNeg-val :lambda-list '(m))
(cl:defmethod OriStiffNeg-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:OriStiffNeg-val is deprecated.  Use cisst_msgs-msg:OriStiffNeg instead.")
  (OriStiffNeg m))

(cl:ensure-generic-function 'OriDampingPos-val :lambda-list '(m))
(cl:defmethod OriDampingPos-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:OriDampingPos-val is deprecated.  Use cisst_msgs-msg:OriDampingPos instead.")
  (OriDampingPos m))

(cl:ensure-generic-function 'OriDampingNeg-val :lambda-list '(m))
(cl:defmethod OriDampingNeg-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:OriDampingNeg-val is deprecated.  Use cisst_msgs-msg:OriDampingNeg instead.")
  (OriDampingNeg m))

(cl:ensure-generic-function 'TorqueBiasPos-val :lambda-list '(m))
(cl:defmethod TorqueBiasPos-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:TorqueBiasPos-val is deprecated.  Use cisst_msgs-msg:TorqueBiasPos instead.")
  (TorqueBiasPos m))

(cl:ensure-generic-function 'TorqueBiasNeg-val :lambda-list '(m))
(cl:defmethod TorqueBiasNeg-val ((m <prmFixtureGainCartesianSet>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cisst_msgs-msg:TorqueBiasNeg-val is deprecated.  Use cisst_msgs-msg:TorqueBiasNeg instead.")
  (TorqueBiasNeg m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <prmFixtureGainCartesianSet>) ostream)
  "Serializes a message object of type '<prmFixtureGainCartesianSet>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'ForceOrientation) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'ForcePosition) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'TorqueOrientation) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'PosStiffPos) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'PosStiffNeg) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'PosDampingPos) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'PosDampingNeg) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'ForceBiasPos) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'ForceBiasNeg) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'OriStiffPos) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'OriStiffNeg) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'OriDampingPos) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'OriDampingNeg) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'TorqueBiasPos) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'TorqueBiasNeg) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <prmFixtureGainCartesianSet>) istream)
  "Deserializes a message object of type '<prmFixtureGainCartesianSet>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'ForceOrientation) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'ForcePosition) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'TorqueOrientation) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'PosStiffPos) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'PosStiffNeg) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'PosDampingPos) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'PosDampingNeg) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'ForceBiasPos) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'ForceBiasNeg) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'OriStiffPos) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'OriStiffNeg) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'OriDampingPos) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'OriDampingNeg) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'TorqueBiasPos) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'TorqueBiasNeg) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<prmFixtureGainCartesianSet>)))
  "Returns string type for a message object of type '<prmFixtureGainCartesianSet>"
  "cisst_msgs/prmFixtureGainCartesianSet")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'prmFixtureGainCartesianSet)))
  "Returns string type for a message object of type 'prmFixtureGainCartesianSet"
  "cisst_msgs/prmFixtureGainCartesianSet")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<prmFixtureGainCartesianSet>)))
  "Returns md5sum for a message object of type '<prmFixtureGainCartesianSet>"
  "e52654ad70465afa307bde13463e05e5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'prmFixtureGainCartesianSet)))
  "Returns md5sum for a message object of type 'prmFixtureGainCartesianSet"
  "e52654ad70465afa307bde13463e05e5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<prmFixtureGainCartesianSet>)))
  "Returns full string definition for message of type '<prmFixtureGainCartesianSet>"
  (cl:format cl:nil "Header header~%~%# vf pos & ori~%geometry_msgs/Quaternion  ForceOrientation~%geometry_msgs/Vector3     ForcePosition~%geometry_msgs/Quaternion  TorqueOrientation~%~%# force gains~%geometry_msgs/Vector3     PosStiffPos~%geometry_msgs/Vector3     PosStiffNeg~%geometry_msgs/Vector3     PosDampingPos~%geometry_msgs/Vector3     PosDampingNeg~%geometry_msgs/Vector3     ForceBiasPos~%geometry_msgs/Vector3     ForceBiasNeg~%~%# torque gains~%geometry_msgs/Vector3     OriStiffPos~%geometry_msgs/Vector3     OriStiffNeg~%geometry_msgs/Vector3     OriDampingPos~%geometry_msgs/Vector3     OriDampingNeg~%geometry_msgs/Vector3     TorqueBiasPos~%geometry_msgs/Vector3     TorqueBiasNeg~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'prmFixtureGainCartesianSet)))
  "Returns full string definition for message of type 'prmFixtureGainCartesianSet"
  (cl:format cl:nil "Header header~%~%# vf pos & ori~%geometry_msgs/Quaternion  ForceOrientation~%geometry_msgs/Vector3     ForcePosition~%geometry_msgs/Quaternion  TorqueOrientation~%~%# force gains~%geometry_msgs/Vector3     PosStiffPos~%geometry_msgs/Vector3     PosStiffNeg~%geometry_msgs/Vector3     PosDampingPos~%geometry_msgs/Vector3     PosDampingNeg~%geometry_msgs/Vector3     ForceBiasPos~%geometry_msgs/Vector3     ForceBiasNeg~%~%# torque gains~%geometry_msgs/Vector3     OriStiffPos~%geometry_msgs/Vector3     OriStiffNeg~%geometry_msgs/Vector3     OriDampingPos~%geometry_msgs/Vector3     OriDampingNeg~%geometry_msgs/Vector3     TorqueBiasPos~%geometry_msgs/Vector3     TorqueBiasNeg~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <prmFixtureGainCartesianSet>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'ForceOrientation))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'ForcePosition))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'TorqueOrientation))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'PosStiffPos))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'PosStiffNeg))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'PosDampingPos))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'PosDampingNeg))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'ForceBiasPos))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'ForceBiasNeg))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'OriStiffPos))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'OriStiffNeg))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'OriDampingPos))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'OriDampingNeg))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'TorqueBiasPos))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'TorqueBiasNeg))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <prmFixtureGainCartesianSet>))
  "Converts a ROS message object to a list"
  (cl:list 'prmFixtureGainCartesianSet
    (cl:cons ':header (header msg))
    (cl:cons ':ForceOrientation (ForceOrientation msg))
    (cl:cons ':ForcePosition (ForcePosition msg))
    (cl:cons ':TorqueOrientation (TorqueOrientation msg))
    (cl:cons ':PosStiffPos (PosStiffPos msg))
    (cl:cons ':PosStiffNeg (PosStiffNeg msg))
    (cl:cons ':PosDampingPos (PosDampingPos msg))
    (cl:cons ':PosDampingNeg (PosDampingNeg msg))
    (cl:cons ':ForceBiasPos (ForceBiasPos msg))
    (cl:cons ':ForceBiasNeg (ForceBiasNeg msg))
    (cl:cons ':OriStiffPos (OriStiffPos msg))
    (cl:cons ':OriStiffNeg (OriStiffNeg msg))
    (cl:cons ':OriDampingPos (OriDampingPos msg))
    (cl:cons ':OriDampingNeg (OriDampingNeg msg))
    (cl:cons ':TorqueBiasPos (TorqueBiasPos msg))
    (cl:cons ':TorqueBiasNeg (TorqueBiasNeg msg))
))
