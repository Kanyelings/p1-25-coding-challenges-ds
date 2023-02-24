def isPrime(y):

    if y == 0:
        return False
    elif y == 1:
        return False

    elif y == 2:
        return True
    for i in range(3,y-1):
        if y % n == 0:
           return False
    return True

y = int(input("Enter a number: "))