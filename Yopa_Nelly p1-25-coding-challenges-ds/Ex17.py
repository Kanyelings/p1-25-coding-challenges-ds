sum = 0
num = input("Enter a number: ")
if int(num) > 0:
    for digit in num:
        sum = sum + int(digit)
    print(f"the sum of digits in {num} is: ", sum)
else:
    print("Enter a positive integer!")