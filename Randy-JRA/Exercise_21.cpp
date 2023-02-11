//Challenge 21 is to Rotate an array to the right 1 position
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n) {
    int temp = arr[n-1];
    for (int i = n-1; i <n-1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[n - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    rotateArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

