array = [3, 5, 23, 12, 4]
sum = 0
for i in range(0, len(array)):
    sum += array[i]
average = sum / (len(array))
print("my array is: ", array)
print("The sum of the array is: ", sum)
print("The average of the array is: ", average)