#include <iostream>

using namespace std;

int main()
{
    int testArr[] = {1,2,3,4,5};
    int a = testArr[-1+(sizeof testArr/4)];
    for(int i=-1+(sizeof testArr/4); i>=0; i--){
        testArr[i] = testArr[i-1];
    }
    testArr[0] = a;
    //Display
    for(int i=0; i<sizeof testArr/4; i++){
        cout << testArr[i] <<" ";
    }
    return 0;
}
