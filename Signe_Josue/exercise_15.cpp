#include <iostream>

/**
 * fibonacciNum - Find the nth fibonacci number.
 * @n: position of the fibonacci number to find
 * 
 * Returns: Fibonacci number at the @nth posotion.
*/
int fibonacciNum(int n)
{
    if (n == 0)
        return (0);
    else if (n == 1)
        return (1);
    else
        return (fibonacciNum(n - 1) + fibonacciNum(n - 2));
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int fib = fibonacciNum(0);

    std::cout << fib << std::endl;
    return 0;
}