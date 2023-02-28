# Create a function that will return a Boolean specifying if a number is prime
def isprime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    for i in range(2, (n - 1)):
        if n % i == 0:
            return False
    return True


print(7, "is prime:", isprime(7))
print(10, "is prime:", isprime(10))
print(3, "is prime:", isprime(2))
print(1, "is prime:", isprime(1))
print(13, "is prime:", isprime(13))






