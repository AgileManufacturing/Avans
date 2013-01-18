"""autogenerated by genpy from deltaRobotNode/MoveToPointRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import deltaRobotNode.msg

class MoveToPointRequest(genpy.Message):
  _md5sum = "d5e2b63c47d3ae5a19960378109d3c87"
  _type = "deltaRobotNode/MoveToPointRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """Motion motion

================================================================================
MSG: deltaRobotNode/Motion
float64 x
float64 y
float64 z
float64 speed
"""
  __slots__ = ['motion']
  _slot_types = ['deltaRobotNode/Motion']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       motion

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveToPointRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.motion is None:
        self.motion = deltaRobotNode.msg.Motion()
    else:
      self.motion = deltaRobotNode.msg.Motion()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_4d.pack(_x.motion.x, _x.motion.y, _x.motion.z, _x.motion.speed))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.motion is None:
        self.motion = deltaRobotNode.msg.Motion()
      end = 0
      _x = self
      start = end
      end += 32
      (_x.motion.x, _x.motion.y, _x.motion.z, _x.motion.speed,) = _struct_4d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_4d.pack(_x.motion.x, _x.motion.y, _x.motion.z, _x.motion.speed))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.motion is None:
        self.motion = deltaRobotNode.msg.Motion()
      end = 0
      _x = self
      start = end
      end += 32
      (_x.motion.x, _x.motion.y, _x.motion.z, _x.motion.speed,) = _struct_4d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4d = struct.Struct("<4d")
"""autogenerated by genpy from deltaRobotNode/MoveToPointResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MoveToPointResponse(genpy.Message):
  _md5sum = "95e696a0d10686913abb262e0b4cbbcf"
  _type = "deltaRobotNode/MoveToPointResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool succeeded

"""
  __slots__ = ['succeeded']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       succeeded

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MoveToPointResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.succeeded is None:
        self.succeeded = False
    else:
      self.succeeded = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_B.pack(self.succeeded))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.succeeded,) = _struct_B.unpack(str[start:end])
      self.succeeded = bool(self.succeeded)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_B.pack(self.succeeded))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.succeeded,) = _struct_B.unpack(str[start:end])
      self.succeeded = bool(self.succeeded)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
class MoveToPoint(object):
  _type          = 'deltaRobotNode/MoveToPoint'
  _md5sum = 'e333d572d6da71847017b8df0bfa52b4'
  _request_class  = MoveToPointRequest
  _response_class = MoveToPointResponse