from pyQuantuccia import quantuccia

def test_get_holiday_date():
    """ At the moment the only thing this function
        can do is return NULL.
    """
    assert(quantuccia.get_holiday_date() is None)
