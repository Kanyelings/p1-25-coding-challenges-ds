#include <iostream>


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            std::cout << i << " * " << j << " = " <<  i * j << std::endl;
        std::cout << std::endl;
    }
}