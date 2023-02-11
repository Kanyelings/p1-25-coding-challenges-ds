#include <iostream>

/**
 * rotateArrayRight - Rotates an array to the Right position by 1.
 * @arr: an Array
 * @size: The number of elements to in @rr.
 * 
 *return: void 
*/
void rotateArrayRight(int arr[], int size)
{
    int temp = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] =  arr[i - 1];
    }
    arr[0] = temp;
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

    rotateArrayRight(myarray, 11);
    
    for(int i = 0; i < 11; i++)
        std::cout << myarray[i] << "\t";
    std::cout << std::endl;
}