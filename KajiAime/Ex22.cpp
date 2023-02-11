#include <iostream>

using namespace std;

int main()
{
    int arr[]= {1,2,3,4,5};
    int rev[100];
    for(int i=0; i<sizeof arr/sizeof arr[1]; i++){
        rev[i] = arr[(sizeof arr/sizeof arr[1])-i-1];
    }
    for(int i=0; i<sizeof arr/sizeof arr[1]; i++){
        arr[i] = rev[i];
    }
    // Display
    for(int i=0; i<sizeof arr/sizeof arr[1]; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
