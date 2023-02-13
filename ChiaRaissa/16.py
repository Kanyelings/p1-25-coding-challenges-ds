def isPrime(x):
    x = int(x)
    for i in range(2, x):
        if(x % i == 0):
             return False

        if(x == 0 and x == 1):
                return False
    else:
                    return True
                    return x


print(isPrime(input("Enter a prime number. ")))
