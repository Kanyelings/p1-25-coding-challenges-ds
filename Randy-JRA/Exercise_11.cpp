//Challenge 11 is to Calculate the average of the numbers in an array of numbers 
//Example array[1, 3, 9, 15, 90] Expected output:23.6

#include <iostream>
using namespace std;
int main() {
  // we first initialise out array
  int arr[] = {1,3,9,15,90};
  float sizeofarray = 5;
  // initialise sum to zero
  float sum = 0;
  float avrg;
  // for loop runs from 0 to sizeofarray - 1
  for(int i = 0; i < sizeofarray ; i++)
  {
    sum = sum + arr[i];
  }
  avrg = sum/sizeofarray;
  cout << "The average of the elements in the array: " << avrg;
}
