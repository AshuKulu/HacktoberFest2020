def fibonacci(n):
    """
    Return n-th Fibonacci number.

    Raises TypeError if n is not integer.
    Raises ValueError if n is negative.
    :param n: (int) natural number
    :return: (int) n-th Fibonacci number
    """
    a, b = 0, 1
    if n == 0:
        return a
    elif n == 1:
        return b
    else:
        for _ in range(2, n + 1):
            c = a + b
            a, b = b, c
        return b