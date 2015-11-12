def fib(n):
    ans = 0
    if n == 0:
        return ans
    else:
        last_two = [0, 1]
        for i in range(1, n):
            ans = sum(last_two)
            last_two[0] = last_two[1]
            last_two[1] = ans
    return ans


def main():
    maximum = 4*(10**6)
    evenSum = 0
    n = 1
    while fib(n) < maximum:
        n += 1
        if fib(n) % 2 == 0:
                evenSum += fib(n)

    return evenSum

print main()
