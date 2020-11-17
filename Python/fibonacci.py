def fibonacci(n):
    """
    Return n-th Fibonacci number.

    Raises AssertionError if n is not integer or negative.
    :param n: (int) natural number
    :return: (int) n-th Fibonacci number
    """
    assert isinstance(n, int), "Fibonacci is only defined for integers."
    assert n >= 0, "Fibonacci is only defined for non-negative numbers."
    
    if n < 2:
        return n
    
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b
