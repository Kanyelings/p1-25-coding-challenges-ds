#include <iostream>


/**
 * sum_array - Sums the content of an array.
 * @arr: an array.
 * @size: size of the array.
 * 
 * Return: the sum of elements in the @arr;
 */
int sum_array(int arr[], int size)
{
    int sum = 0;
    int i;

    for (i = 0 ; i < size ; i++)
    {
        sum += arr[i];
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
    int my_array[] = {3, 5, 8, 2, 6, 4};
    std::cout << "sum of elements: " << sum_array(my_array, 6) << std::endl;
    return (0);
}