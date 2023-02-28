# Find the maximum number in an array of numbers
import heapq
arr = [23, 8, 12, 3, 15, 20]
max = heapq.nlargest(1, arr)
print("Array = ", arr)
print("Maximun number in array = ",max)