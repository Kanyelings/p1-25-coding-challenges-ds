def remove_duplicate(arr1, arr2):
    arr = arr1 + arr2
    newarray = []
    [newarray.append(x) for x in arr if x not in newarray]
    print("Array after removing duplicate elements are", newarray)


a =[1, 2, "hello", 5, 75, 1, "let"]
b = ["hello", "let", 2, 7, 75, "merge this", "two arrays"]
print("array 1 = ", a)
print("array 2 = ", b)
print(remove_duplicate(a, b))
