#  Create a function that will return a Boolean specifying if a number is prime

def is_prime(number):
    if number <= 1:
        flag = False
    flag = False
    for i in range(2, number):  # Why is there an error when number=5 with loop running from 2 to (number//2)?
        if number % i != 0:
            flag = True
            break
    return flag


print(prime_or_not(37))
