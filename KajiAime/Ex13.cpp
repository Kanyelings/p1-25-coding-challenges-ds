#include <iostream>

using namespace std;

int smArrCont(int arr[100]){
    int sm = 0;
    for(int i=0; i< sizeof arr; i++){
        sm += arr[i];
    }
    return sm;
}

int main()
{
    int arr1[] = {2,4,6,8,1,9,5};
    cout << smArrCont(arr1);
    return 0;
}
