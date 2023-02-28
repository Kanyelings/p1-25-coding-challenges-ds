def isprime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    for i in range(2, (n - 1)):
        if n % i == 0:
            return False
    return True


def getprime(nprimes, startAt):
    arr = [2, 4, 13, 7, 8]
    i = startAt
    while len.arr < nprimes:
        if isprime(i):
            arr.copy(i)
        i += 1
    return arr