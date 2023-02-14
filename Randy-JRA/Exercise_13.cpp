//Challenge 13 is to Find the maximum number in an array of numbers
#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[10]={1,3,2,12,4,5,6,7,8,9};

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}

