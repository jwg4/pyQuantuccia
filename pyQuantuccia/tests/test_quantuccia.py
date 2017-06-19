import pytest

from pyQuantuccia.quantuccia import united_kingdom_is_business_day


def test_function_fails_correctly_on_bad_input():
    """
    If we send in something which isn't three
    appropriate ints, something reasonable should
    happen.
    """
    with pytest.raises(Exception):
        united_kingdom_is_business_day(1, 2, 3, 4)
