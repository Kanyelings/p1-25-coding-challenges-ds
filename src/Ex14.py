# first 10 Fibonacci numbers without recursion
first_elem = 0
second_elem = 1
Total = 10
print(first_elem, second_elem, end=" ")
while Total - 2:
    c = first_elem + second_elem
    first_elem = second_elem
    second_elem = c
    print(c, end=" ")
    Total = Total - 1