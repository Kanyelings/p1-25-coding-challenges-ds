def convert(num):
    return (num-32)/1.8


num = int(input("enter the temperature in Fahrenheit: "))
print(f"{num} Fahrenheit = ", convert(num), "celsius")