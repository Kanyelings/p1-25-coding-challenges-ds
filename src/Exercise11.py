import array as arr
def sumarray(items):
    answer = 0
    count = 0
    for values in items:
        answer += values
        count += 1
    return answer/count

answers = sumarray(arr.array("i",[1,2,3,4,5,6]))
print(answers)

#Using a for loop to find the average of all items in an array
