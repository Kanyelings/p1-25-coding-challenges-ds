# Calculate the sum of even numbers greater than 10 and less than 30
result = 0
for i in range(11, 30):
    if i % 2 == 0:
        result += i
print(result)
