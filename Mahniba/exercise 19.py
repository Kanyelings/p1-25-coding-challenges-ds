def is_prime(n):
    if n<=1:
        return False
    for i in range(2,n):
        if n%i==0:
            return False
        return True

def printprime(n,p):
    count=0
    while count<p:
        if is_prime(n)==True:
             print(n,end="")
             count+=1
N=int(input("enter the lower limit"))
P=int(input("enter the of prime :"))
if P<0:
    P=-p
printprime(N,P)




