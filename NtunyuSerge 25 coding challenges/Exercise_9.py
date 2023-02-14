# Create a function that will convert from Fahrenheit to Celsius
def fahrenheit_to_celsius(f):
    return round((f - 32) * 5/9, 1)


print(fahrenheit_to_celsius(20))
