array=[2,4,46,8,18,12,14]
n=len(array)
max=array[0]
for i in range (0,n):
    if array[i]>max:
        max=array[i]
        print(max)
