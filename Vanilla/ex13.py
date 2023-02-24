array = [10, 324, 45, 90, 9808]
max = array[0]
n = len(array)
for i in range(1, n):
    if array[i] > max:
        max = array[i]

print("Largest in given array is", max)