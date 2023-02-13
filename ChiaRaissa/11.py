array = [20,30,40,10,15]
sumArray = 0
avgArray = 0
for i in range(0, len(array)):
    sumArray+=array[i]
    avgArray = sumArray/len(array)
    print('The sum is : ', sumArray)
    print('The avaerage is ', avgArray)
