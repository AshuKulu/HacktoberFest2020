import math


def factors(value):
    factors_ = []
    while value % 2 == 0:
        factors_.append(2)
        value //= 2
    for i in range(3, math.isqrt(value) + 1, 2):
        while value % i == 0:
            factors_.append(i)
            value //= i
    if value > 2:
        factors_.append(value)
    return factors_
