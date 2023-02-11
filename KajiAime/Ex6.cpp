#include <iostream>

using namespace std;

int main()
{
    int factorial = 1;
    for(int i=0; i<10; i++){
        factorial *= i+1;
    }
    cout << factorial;
    return 0;
}
