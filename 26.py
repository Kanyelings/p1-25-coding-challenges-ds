A = []
l = int(input("length of first array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        A.append(t)
print(A)

B = []
l = int(input("length of second array =  "));   print("enter the",l,"elements")
for i in range (0,l):
    t = int(input()) ;        B.append(t)
print(B)

def compare_missing_A(a,b):
    c = []
    for i in range(len(a)):
        for j in range(len(b)):
            if (a[i] == b[j]):
                break
 
        if (j == len(b) - 1):
            c.append(a[i])
    return (c)
print(compare_missing_A(A,B))