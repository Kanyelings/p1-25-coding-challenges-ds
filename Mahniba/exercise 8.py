def convert(celsuis):
    fahrenheit=int (celsuis)*1.8 + 32
    return fahrenheit



value=int(input('enter the value in celsuis: '))
print(convert(value))
