#include <iostream>


/**
 * max - Find the maximum number in an array.
 * @arr: An array of integers.
 * @size: number of elements in the @arr.
 * 
 * Return: The maximum number in @arr.
*/
int maxNumber(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int my_array[7] = {1, 5, 7, -2, -100, 34, 26};
    int result = maxNumber(my_array, 7);

    std::cout << result << std::endl;
    return 0;
}