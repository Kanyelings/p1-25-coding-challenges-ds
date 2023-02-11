#include <iostream>

using namespace std;

int maxCont(int arr[]){
    int maxi = 0;
    for(int i=0; i< sizeof arr; i++){
        if(maxi<arr[i])
        maxi = arr[i];
    }
    return maxi;
}

int main()
{
    int arr1[] = {2,4,6,8,1,9,2,4};
    cout << maxCont(arr1);
    return 0;
}
