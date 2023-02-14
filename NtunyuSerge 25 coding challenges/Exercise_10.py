# Calculate the sum of numbers in an array of numbers
def sum_of_numbers(array):
    result = 0
    for elt in range(len(array)):
        result += array[elt]
    return result


my_array = [12, 3, 15]
print(sum_of_numbers(my_array))
