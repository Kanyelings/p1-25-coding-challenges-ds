import array as arr
def adding_numbers(items):
    sum = 0
    for values in items:
        if values > 0:
            sum+=values
    return sum

answer = adding_numbers(arr.array("i",[-3,4,5,1,-2]))
print(answer)

#Using a loop to sum all the positive numbers found in an array