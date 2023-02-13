def convert(num):
    return num * 1.8 + 32


num = int(input("enter the temperature in celsius: "))
print(f"{num} Celsius = ", convert(num), "Fahrenheit")