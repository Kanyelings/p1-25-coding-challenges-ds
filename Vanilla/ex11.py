array = [1,3,9,15,90]
sum = 0
N=len(array)
for i in range(N):
    sum = sum + array[i]
    average = sum/N
print("Average is : ",average)