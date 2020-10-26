def sieve_of_eratosthenes(n: int) -> list:
    """
    Return ordered list of primes in the interval from 2 to n.

    :param n: (int) right-bound of interval
    :return: (list) ordered list of all prime numbers from 2 to n
    """
    primes = list(range(2, n + 1))
    for i in primes:
        for j in range(2, n // i + 1):
            if i * j in primes:
                primes.remove(i * j)
    return primes
