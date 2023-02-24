#include <iostream>


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int i;
    int fact = 1;
    
    for (i = 1; i <= 10; i++)
        fact *= i;
    std::cout << "factorial of 10 = " << fact << std::endl;
}