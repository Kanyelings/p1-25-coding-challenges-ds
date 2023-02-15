n = int(input("enter the number to get it fibonacci\t"))

def fibonacci(n):
    if n<0 :
        print("enter a positive integer")
    elif n<2 :
        fib = n
    else :
        fib = fibonacci(n-1) + fibonacci(n-2)
    return(fib)

fib = fibonacci(n);  print("the",n,"th fibonnacci number =",fib) 