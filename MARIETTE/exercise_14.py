f0= 0
print(f0)
f1=1
print(f1)
for i in range (2,11):
    f1= f0 + f1
    f0=f1
    f1=f1
    print(f1)