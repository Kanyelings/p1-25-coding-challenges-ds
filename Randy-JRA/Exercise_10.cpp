//Challenge 10 is to Calculate the sum of numbers in an array of numbers.Example array: [2, 3, -1, 5, 7, 9, 10, 15, 95] Expected output: 145
#include <iostream>
using namespace std;
int main() {
  // we first initialise out array
  int arr[] = {2,3,-1,5,7,9,10,15,95};
  int sizeofarray = 9;
  // initialise sum to zero
  int sum = 0;
  // for loop runs from 0 to sizeofarray - 1
  for(int i = 0; i < sizeofarray ; i++)
  {
    sum = sum + arr[i];
  }
  cout << "The sum of the elements in the array: " << sum;
}
