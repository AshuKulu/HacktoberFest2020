import math

def factors(value):
    factors = []
    while value % 2 == 0:
        factors.append(2)
        value //= 2
    for i in range(3, math.isqrt(value) + 1, 2):
        while value % i == 0:
            factors.append(i)
            value //= i
    if value > 2:
        factors.append(value)
    return factors
