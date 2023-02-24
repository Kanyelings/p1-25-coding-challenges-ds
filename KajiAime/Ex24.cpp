#include <iostream>

using namespace std;

int * concArr(int arr1[100], int arr2[100]){
    static int arr3[100];
    int j=0;
    for(j=0; j<sizeof arr1; j++){
        arr3[j] = arr1[j];
    }
    for(int i=0; i<sizeof arr2; i++){
        arr3[i+j] = arr2[i];
    }
    return arr3;
}

int main()
{
    int *result;
    int ar1[] = {1,2,3,4,5,6,7,8};
    int ar2[] = {9,10,11,12,13,14,15,16};
    result = concArr(ar1,ar2);
    for(int i=0; i<(sizeof ar1/4 +sizeof ar2/4); i++){
        cout << (result[i])<< " ";
    }
    return 0;
}
