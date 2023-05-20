def primelist(n):
    import numpy
    # Sieve of Eratosthenes - check wiki for more infos
    isPrime = numpy.ones(n, dtype=bool)
    nmax = int(n ** 0.5 + 1)
    isPrime[0], isPrime[1] = False, False
    x, y = 2, 1
    while x <= nmax:
        if isPrime[x]:
            isPrime[x * 2::x] = False
        x += y
        y = 2
    return numpy.argwhere(isPrime)[:, 0]
primes = primelist(2_000_000)
print(sum(primes))