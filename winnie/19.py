def isPrime(n):
  for i in range(2,n):
    if(n%i==0):
      return False
  return True
a =[]
for i in range(2,1000):
  if(isPrime(i)):
    a.append(i)
print("array of all prime numbers btn 0 and 1000 =",a)

n = int(input("\nenter n btn 0 and 1000\t"))
def prime_geaterthan_n(n,a):
    for i in range (0,len(a)):
        if a[i] > n :
            print(a[i]) ; break

prime_geaterthan_n(n,a)