#include <iostream>
#include <vector>
#include <cmath>


/**
 * firstNPrimes - Return the first n Primes in an array
 * @arr: An array
 * @size: number of elements in @arr.
 * @n: number of first primes to obtained from @arr.
 * 
 * Return: the first nth primes in an Array
*/
std::vector<int> firstNPrimes(int arr[], int size, int n)
{
    int count = 0;
    bool isPrime = true;
    std::vector<int> primesArray;
    
    for (int j = 0; j < size && count < n; j++)
    {    
        if (arr[j] <= 1)
        {
            isPrime = false;
        }   
        for (int i = 2; i <= sqrt(arr[j]); i++)
        {
            if (arr[j] % i == 0)
            {
                isPrime = false;
                break;
            }   
        }
        if(isPrime)
        {
            primesArray.push_back(arr[j]);
            count++;
        }
        isPrime = true;
    }
    return primesArray;
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int my_array[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    std::vector<int> result;

    result = firstNPrimes(my_array, 17, 5);   
    for (int i = 0; i < result.size(); i++)
        std::cout << result[i] << "\t";
    std::cout << std::endl;
    return 0;
}