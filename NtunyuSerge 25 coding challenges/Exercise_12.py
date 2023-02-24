# Create a function that receives an array of numbers as argument and
# returns an array containing only the positive numbers
def array_of_positive_numbers(array):
    result = []
    for elt in array:
        if elt >= 0:
            result.append(elt)
    return result


my_array = [23, -1, 0, 2, -5]
print(array_of_positive_numbers(my_array))
