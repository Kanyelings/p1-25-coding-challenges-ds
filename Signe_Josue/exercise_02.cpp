#include <iostream>


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int i;

    for (i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
            std::cout << i << std::endl;
    }
}