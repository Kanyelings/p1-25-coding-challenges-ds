A = []
l = int(input("length of array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        A.append(t)
def positive_array(A):
    B = []
    for i in range (0,len(A)):
        if (A[i] > 0):
            B.append(A[i])
    return B
B = positive_array(A) ;       print (B)