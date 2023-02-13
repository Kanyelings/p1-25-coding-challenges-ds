def isprime(n):
 if n<=1:
     return False
 for i in range(2,n):
        if n%i == 0:
            return False
        return True

        def printprime(n, p):
            count = 0
            while count<p:
                if isprime(n) == True:
                    print(n, end=" ")
                    count+=1
                    n+=1
N = int(input("Enter the lower limit: "))
P = int(input("Enter the number of prime to be printed: "))
if P<0:
 P=-P
print(f"\nThe first {P} prime numbers after {N} are: ")
printprime(N, P)

