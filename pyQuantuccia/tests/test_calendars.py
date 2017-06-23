from pyQuantuccia import py_calendar


def test_can_get_TARGET_calendar_wrapper():
    """ Check we can create a POPO which
        contains a reference to a C++ object.
    """
    target_cal = py_calendar.TargetCalendar()
    assert(target_cal is not None)
