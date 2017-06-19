from datetime import date

from pyQuantuccia import calendar


def test_united_kingdom_is_business_day_identifies_a_holiday():
    """ Check a single day to see that we
    can identify holidays.
    """
    assert(calendar.united_kingdom_is_business_day(date(2017, 4, 17)) is False)


def test_united_kingdom_is_business_day_identifies_a_business_day():
    """ Check a single day to see that we
    can identify holidays.
    """
    assert(calendar.united_kingdom_is_business_day(date(2017, 6, 19)) is True)
