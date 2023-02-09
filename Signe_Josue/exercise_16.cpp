#include <iostream>
#include <cmath>


/**
 * isPrime - Check whether a number is prime
 * @num: Number to check
 * 
 * Returns: Boolean
*/
bool isPrime(int num)
{
    if(num < 2)
        return (false);
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return (false);
        }
    }

    return (true);
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    std::cout << "1: " << isPrime(1) << std::endl;
    std::cout << "5: " << isPrime(5) << std::endl;
    std::cout << "2: " << isPrime(2) << std::endl;
    std::cout << "81: " << isPrime(81) << std::endl;
    std::cout << "11: " << isPrime(11) << std::endl;
    std::cout << "-5: " << isPrime(1) << std::endl;
    return (0);
}