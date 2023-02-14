#include <iostream>
#include <vector>


/**
 * mergeArrays - Merge Two arrays
 * @arr1: An array
 * @arr2: An array
 * 
 * Return: A merged array of @arr1 and @arr2.
*/
std::vector<int> mergeArrays(std::vector<int> arr1,  std::vector<int> arr2)
{
    std::vector<int> mergedArr = {0};
    int i, j;
    bool exist = false;

    for(i = 0; i < arr1.size(); i++)
    {
        for(j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
                break;
        }
        if (j == arr2.size())
            mergedArr.push_back(arr1[i]);
    } 
    for(i = 0; i < arr2.size(); i++)
    {
        for(j = 0; j < arr1.size(); j++)
        {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == arr1.size())
            mergedArr.push_back(arr2[i]);
    } 
    return mergedArr;
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    std::vector<int> my_arr1 = {1,2,3,4,5,12};
    std::vector<int> my_arr2 = {9,2,11,12,13};
    std::vector<int>result =  mergeArrays(my_arr1, my_arr2);

    for (int i = 0; i < result.size(); i++)
        std::cout << result[i] << "\t";
    std::cout << std::endl;
    return 0;
}