import pyQuantuccia


def test_not_a_real_test():
    _dir = str(pyQuantuccia.__dir__())
    _dict = str(pyQuantuccia.__dict__)
    s = " ".join([_dict, _dir])
    print(s)
    assert(s == "")