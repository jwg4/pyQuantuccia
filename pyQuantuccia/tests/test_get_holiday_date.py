import quantuccia


def test_easter_monday():
    """ Check a single year to make sure we can find 
        the date of Catholic Easter.
    """
    assert(quantuccia.easter_monday(2017) == 76)
