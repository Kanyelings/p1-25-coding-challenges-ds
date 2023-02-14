//Challenge 12 is to Create a function that receives an array of numbers and returns an 
//array containing only the positive numbers. Requirement: Use a “for” loop
#include <iostream>
int arr[4]={1,2,3,4};
void displayPositiveNumbers(int arr[], int size) {
    int positiveNumbers[size];  // array to store positive numbers
    int j = 0;  // index for positiveNumbers array
  
    // loop through the original array
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {  // check if the current number is positive
            positiveNumbers[j] = arr[i];  // add the positive number to the positiveNumbers array
            j++;  // increase the index of the positiveNumbers array
        }
    }
  
    // display the positive numbers
    std::cout << "The positive numbers are: ";
    for (int i = 0; i < j; i++) {
        std::cout << positiveNumbers[i] << " ";
    }
}

