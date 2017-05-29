from datetime import date

import calendar


def test_foo():
    assert(calendar.__dir__() == "")


def test_dummy():
    assert(calendar.__dict__ == "")


def test_united_kingdom_is_business_day():
    """ Check a single day to see that we
    can identify holidays.
    """
    assert(calendar.united_kingdom_is_business_day(date(2017, 4, 17)) is False)
