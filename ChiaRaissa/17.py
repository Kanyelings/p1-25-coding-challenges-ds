n = int(input("Enter the number whose digits will be added: "))
n = str(n)
sum = 0
for i in n:
    sum+=int(i)
    print(f"The sum of the digits of {n} is {sum}")
