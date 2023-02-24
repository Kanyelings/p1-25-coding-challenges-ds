arr = [1, 2, 3, 4, 5];
n = 1
print("Original array: ",arr);

m = len(arr)
for i in range(0, n):
    first = arr[0];

    for j in range(0, m-1):
        arr[j] = arr[j + 1];

    arr[m - 1] = first;

print();

print("Array after left rotation: ");
for i in range(0, m):
    print(arr[i])