//Challenge 25 is to Create a function that will receive two arrays of numbers as arguments and return an array composed of
//all the numbers that are either in the first array or second array but not in both
#include<bits/stdc++.h>
using namespace std;
  
void mergeArrays(int arr1[], int arr2[], int n1,
                            int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
      // traverse the arr1 and insert its element in arr3
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
        
      // now traverse arr2 and insert in arr3
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
        
      // sort the whole array arr3
      sort(arr3, arr3+n1+n2);
}
  
// Driver code
int main()
{
    int arr1[] = {1, 9, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
  
    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
  
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
  
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
  
    return 0;
}
