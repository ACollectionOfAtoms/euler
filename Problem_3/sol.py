def sieve_of_eratosthenes(n):
    rejects = set()
    nums = range(2, n)
    primes = []
    for num in nums:
        if num in rejects:
            pass
        else:
            primes.append(num)
            rejects.update(range(num, n + num, num))
    return primes
