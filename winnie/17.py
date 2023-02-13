n = input("enter a positive number\t")
sum = 0
if (int(n)>0):
    for digit in n:
        sum = sum + int(digit)
    print("sum of digits in",n,"=",sum)