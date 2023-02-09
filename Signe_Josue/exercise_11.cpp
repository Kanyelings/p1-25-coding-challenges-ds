#include <iostream>


/**
 * average_array - computes the average numbers of an array.
 * @arr: an array.
 * @size: size of the array.
 * 
 * Return: the average of elements in the @arr;
 */
float average_array(int arr[], int size)
{
    int sum = 0;
    int i;

    for (i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }
    return ((float)sum / size);
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int my_array[] = {3, 5, 8, 2, 6, 4};
    std::cout << "sum of elements: " << average_array(my_array, 6) << std::endl;
    return (0);
}