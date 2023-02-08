def isPrime(n):
  for i in range(2,n):
    if(n%i==0):
      return False
  return True
a =[]
for i in range(2,1000):
  if(isPrime(i)):
    a.append(i)
  if (len(a) == 100):
    break
print("array of first 100 prime numbers =",a)