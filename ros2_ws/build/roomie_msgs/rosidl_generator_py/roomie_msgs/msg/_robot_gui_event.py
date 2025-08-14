# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roomie_msgs:msg/RobotGuiEvent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotGuiEvent(type):
    """Metaclass of message 'RobotGuiEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roomie_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roomie_msgs.msg.RobotGuiEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_gui_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_gui_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_gui_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_gui_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_gui_event

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotGuiEvent(metaclass=Metaclass_RobotGuiEvent):
    """Message class 'RobotGuiEvent'."""

    __slots__ = [
        '_robot_id',
        '_rgui_event_id',
        '_task_id',
        '_timestamp',
        '_detail',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_id': 'int32',
        'rgui_event_id': 'int32',
        'task_id': 'int32',
        'timestamp': 'builtin_interfaces/Time',
        'detail': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', int())
        self.rgui_event_id = kwargs.get('rgui_event_id', int())
        self.task_id = kwargs.get('task_id', int())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.detail = kwargs.get('detail', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.rgui_event_id != other.rgui_event_id:
            return False
        if self.task_id != other.task_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.detail != other.detail:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_id' field must be an integer in [-2147483648, 2147483647]"
        self._robot_id = value

    @builtins.property
    def rgui_event_id(self):
        """Message field 'rgui_event_id'."""
        return self._rgui_event_id

    @rgui_event_id.setter
    def rgui_event_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rgui_event_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rgui_event_id' field must be an integer in [-2147483648, 2147483647]"
        self._rgui_event_id = value

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'task_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_id' field must be an integer in [-2147483648, 2147483647]"
        self._task_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def detail(self):
        """Message field 'detail'."""
        return self._detail

    @detail.setter
    def detail(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'detail' field must be of type 'str'"
        self._detail = value
