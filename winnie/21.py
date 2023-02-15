A = []
l = int(input("length of array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        A.append(t)
print(A)
first = A[0]
A[0] = A[len(A)-1]
i = len(A)-1
while(i>1):
    A[i] = A[i-1]
    i = i-1
A[1] = first
print(A)