def suming_digits(number = "3456"):
    sum = 0
    for values in number:
        sum += int(values)
    return sum

print(suming_digits("23453"))

# i innitialize the parameter number, then used this function to sum the digits to make testing easy
# Also taking number as a string, then changing to an interger befor adding