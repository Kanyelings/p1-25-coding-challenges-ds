#include <iostream>
#include <cmath>


/**
 * printPrimes - print the first nth prime numbers.
 * @n: number of prime numbers.
 * 
 * Return: void.
*/
void printPrimes(int n)
{
    int count = 0;
    int num = 2;
    bool isPrime = true;
    while (count < 100)
    {   
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }   
        }
        if(isPrime)
        {
            std::cout << num << std::endl;
            count++;
        }
        isPrime = true;
        num++;
    }
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    printPrimes(100);
}