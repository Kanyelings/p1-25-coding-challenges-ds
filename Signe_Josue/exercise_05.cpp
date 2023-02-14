#include <iostream>


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
        sum += i;

    std::cout << "Sum = " << sum << std::endl;
}