# Create a function that will find the nth Fibonacci number using recursion
def find_nth_fib_number(n):
    if n == 1:
        return 1
    elif n == 0:
        return 0
    return n + find_nth_fib_number(n-1)


print(find_nth_fib_number(10))
