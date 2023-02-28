# Initialize array
arr = [1, 2, 3, 4, 5]
n = int(input("enter the number of time you want to shift"))
print("Original array \n", arr)
for i in range(0, n):
    first = arr[0]
    for j in range(0, len(arr)-1):
        arr[j] = arr[j+1]
    arr[len(arr)-1] = first
print("Array after left rotation: \n", arr)
