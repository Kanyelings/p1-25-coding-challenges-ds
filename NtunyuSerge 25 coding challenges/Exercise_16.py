#  Create a function that will return a Boolean specifying if a number is prime

def prime_or_not(number):
    if number <= 1:
        result = False
    elif number == 2:
        result = True
    for i in range(2, number):  # Why is there an error when number=5 with loop running from 2 to (number//2)?
        if number % i == 0:
            result = False
            break
        result = True
    return result


print(prime_or_not(37))
