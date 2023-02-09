#include <iostream>

/**
 * reverseArray - Reverse an array
 * @arr: an Array
 * @size: size of @arr
 * 
 * Return: void
*/
void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < (int)(size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    int myarray[] = {1,2,3,4,5,6,7,8,9,10,11};
    
    for(int i = 0; i < 11; i++)
        std::cout << myarray[i] << "\t";
    std::cout << std::endl;

    reverseArray(myarray, 11);
    
    for(int i = 0; i < 11; i++)
        std::cout << myarray[i] << "\t";
    std::cout << std::endl;
}