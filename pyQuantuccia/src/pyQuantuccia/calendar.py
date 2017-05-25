from quantuccia import united_kingdom_is_business_day as c_function


def united_kingdom_is_business_day(dt):
    return c_function(dt.year, dt.month, dt.day)
