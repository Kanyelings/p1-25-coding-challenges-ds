#include <iostream>
#include <vector>

/**
 * positiveNums - Gets positive elements of an array.
 * @arr: An array
 * @size: the number os elements in @arr
 * 
 * Return: An array of positive numbers in @arr.
*/
std::vector<int> postiveNums(int arr[], int size)
{
    std::vector<int> resultArray;
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            resultArray.push_back(arr[i]);
            n++;
        }
    }
    return resultArray;
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */

int main()
{
    int numbers[] = {0, -1, -2, 3, 4, -5, 6, -7, -8, 9};
    std::vector<int> result = postiveNums(numbers, 10);
    for (int i = 0; i < result.size(); i++)
        std::cout << result[i] << "\t";
    std::cout << std::endl;
    return 0;
}