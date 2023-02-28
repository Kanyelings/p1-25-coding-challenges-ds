def sumofnum(n):
    sum = 0
    for i in range(11, 30):
        if i % 2 == 0:
            sum += i
    return sum


print(sumofnum(30))