import array as arr
def function_with_arrays(array1,array2):
    array3=arr.array("i",[])
    for items in array1:
        if items not in array2:
            array3.append(items)
            return array3


input1=(arr.array("i",[1,3,5,7,9]))
input2=(arr.array("i",[2,4,6,8,10]))
print(function_with_arrays(input1,input2))

