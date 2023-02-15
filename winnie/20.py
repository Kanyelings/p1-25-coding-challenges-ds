A = []
l = int(input("length of array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        A.append(t)
print(A)
end = A[(len(A)-1)]
A[(len(A)-1)] = A[0]
for i in range(0,len(A)-2):
    A[i] = A[i+1]
A[(len(A)-2)] = end
print(A)