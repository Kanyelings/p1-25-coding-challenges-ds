#include <iostream>

using namespace std;

int main()
{
    int testArr[] = {1,2,3,4,5};
    int a = testArr[0];
    for(int i=1; i<sizeof testArr/4; i++){
        testArr[i-1] = testArr[i];
    }
    testArr[-1 +sizeof testArr/4] = a;
    //Display
    for(int i=0; i<sizeof testArr/4; i++){
        cout << testArr[i] <<" ";
    }
    return 0;
}
