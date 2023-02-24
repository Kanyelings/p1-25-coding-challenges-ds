#include <iostream>


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int num1 = 0;
    int num2 = 1;
    int fib;

    std::cout << num1 << "\n" << num2 << std::endl;
    for (int i = 0; i < 8; i++)
    {
        fib = num1 + num2;
        std::cout << fib << std::endl;
        num1 = num2;
        num2 = fib;
    }
    return 0;
}