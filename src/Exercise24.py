import array as arr
def function_with_arrays(array1, array2):
    array3 = arr.array("i", [])
    array3 = array1 + array2
    return array3

anwer = function_with_arrays((arr.array("i", [1,2,3,4,5])), (arr.array("i", [6,7,8,9,10])))
print(anwer)

#went by concatenating arrays with a plus sign