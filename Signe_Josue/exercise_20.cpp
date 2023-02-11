#include <iostream>

/**
 * rotateArrayLeft - Rotates an array to the left position by 1.
 * @arr: an Array
 * @size: The number of elements to in @rr.
 * 
 *return: void 
*/
void rotateArrayLeft(int arr[], int size)
{
    int temp = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] =  arr[i + 1];
    }
    arr[size - 1] = temp;
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

    rotateArrayLeft(myarray, 11);
    
    for(int i = 0; i < 11; i++)
        std::cout << myarray[i] << "\t";
    std::cout << std::endl;
}