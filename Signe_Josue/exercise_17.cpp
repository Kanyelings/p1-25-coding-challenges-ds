#include <iostream>


/**
 * sumOfDigits - Compute sum of digits in a number
 * @num: number
 * 
 * Return: sum of digits in a @num.
*/
int sumOfDigits(int num)
{
    int i = 0;
    int sum = 0;    
    int digit;

    while (num / 1 >= 1)
    {
        digit = num % 10; 
        sum += digit; 
        num = num / 10;
    }
    return (sum);
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int digits = 12345678;
    int result = sumOfDigits(digits);

    std::cout << result << std::endl;
    return(0);
}