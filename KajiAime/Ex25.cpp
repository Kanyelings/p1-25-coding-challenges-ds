#include <iostream>

using namespace std;


static int sz=0;

int * symSetDif(int arr1[100], int arr2[100]){
    static int arr3[100];
    for(int j=0; j<sizeof arr1; j++){
        for(int i=0; i<sizeof arr2; i++){
            if(arr1[j] == arr2[i]){
                if(j == -1+ sizeof arr1){
                    break;
                }
                j++;
            }
        }
        arr3[sz]= arr1[j];
        sz++;
    }
    for(int j=0; j<sizeof arr2; j++){
        for(int i=0; i<sizeof arr1; i++){
            if(arr1[j] == arr2[i]){
                if(j == -1+ sizeof arr1){
                    break;
                }
                j++;
            }
        }
        arr3[sz]= arr2[j];
        sz++;
    }
    return arr3;
}

int main()
{
    int *result;
    int ar1[] = {1,2,3,4,5,6,7,8};
    int ar2[] = {8,10,1,12,13,14,15,16};
    result = symSetDif(ar1,ar2);
    for(int i=0; i<sz; i++){
        cout << (result[i])<< " ";
    }
    return 0;
}
