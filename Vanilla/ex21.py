arr = [1, 2, 3, 4, 5]
n = 1;

m=len(arr)
print("Original array: ",arr);

for i in range(0, n):
    last = arr[m - 1];

    for j in range(m - 1, -1, -1):
        arr[j] = arr[j - 1];

    arr[0] = last;

print();
print("Array after right rotation: ");
for i in range(0, m):
    print(arr[i])