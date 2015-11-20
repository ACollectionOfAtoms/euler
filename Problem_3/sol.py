def sieve_of_eratosthenes(n):
    number_list = range(2, n)
    init_marks = [False]*(n - 2)
    number_dictionary = dict(zip(number_list, init_marks))
    p = 2
    primes = []

    for num in number_dictionary:
        if num == p and number_dictionary[num] is False:
            primes.append(num)
