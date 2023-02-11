#include <iostream>

/**
 * reverseString - Reverse a String
 * @str: A string
 * 
 * Return: reversed String
*/
std::string reverseString(std::string str)
{
    int size = str.length();
    char rev_str[size];
    int i;

    for (i = 0; i < size; i++)
        rev_str[i] = str[size - 1 - i];
    rev_str[i] = '\0';
    return rev_str;
}


/**
 * main- Entry point into the program.
 * 
 * Returns: Always 0.
 */
int main()
{
    std::string myString = "Josue";
    std::string result;
    
    std::cout << myString << std::endl;
    result = reverseString(myString);
    std::cout << result << std::endl;
}