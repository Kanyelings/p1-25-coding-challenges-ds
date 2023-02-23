import array as arr
def function_with_arrays(array1, array2):
    array3 = arr.array("i", [])
    for values in array1:
        if values not in array2:
            array3.append(values)

    for values in array2:
        if values not in array1:
            array3.append(values)
    return array3

answer = function_with_arrays((arr.array("i", [1,2,3,8,5])), (arr.array("i", [6,7,8,9,10])))
print(answer)

#used for loops to check the values and skipped if present, in the test, i repeated 8 in the two and it definitely worked