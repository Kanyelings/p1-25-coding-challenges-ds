import numpy as np

A = []
l = int(input("length of array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        A.append(t)
max = np.max(A)
print("max of",A,"=",max)