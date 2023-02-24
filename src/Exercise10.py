import array as arr
def sumarray(items):
    answer = 0
    for values in items:
        answer += values
    return answer

answers = sumarray(arr.array("i",[1,3,8,7,6]))
print(answers)

#using for loops to find the sum of all values in an array
