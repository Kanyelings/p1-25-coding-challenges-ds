#include <iostream>


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int sum = 0;
    int i;

    for (i = 11; i < 30; i++)
    {
        if(i % 2 == 0)
            sum += i;
    }
    std::cout << "Sum = " << sum << std::endl;
}