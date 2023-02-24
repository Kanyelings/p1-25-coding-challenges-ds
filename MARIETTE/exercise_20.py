array=[1,2,3,4,5]
n = 1
print("original array :", array)

m= len(array)
for i in range (0,n):
    first=array[0]
    for j in range (0,m-1):
        array[j]= array[j+i]
    array[m-1]=first
print()
print("array after left rotation:")
for i in range (0,n):
    print(array[i])