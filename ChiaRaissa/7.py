list = range(30)
list = list[11:]
sum = 0
for i in list:
 if i%2 == 0:
   sum+=i
print(f"The sum of even number greater than 10 and less than 30 is : ", sum)
