A = []
l = int(input("length of array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        A.append(t)
print(A)
print(A[::-1])