# Print the first 10 Fibonacci numbers without recursion
first = 0
second = 1
print(first)
for i in range(2, 11):
    fib = first + second
    print(fib)
    first = second
    second = fib
