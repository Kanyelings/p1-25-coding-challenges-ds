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

def merge(a,b):
    c=[]
    c= a+b
    return(c)

print("merge : ",merge(A,B))