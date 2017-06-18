from quantuccia import united_kingdom_is_business_day as c_function


def united_kingdom_is_business_day(dt):
    y = dt.year
    m = dt.month
    d = dt.day
    return c_function(y, m, d)
