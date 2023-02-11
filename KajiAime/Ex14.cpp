#include <iostream>

using namespace std;

int main()
{
    int prevs[] = {1,0};
    int fib = 0;
    for(int i=0; i<10; i++){
        fib = prevs[0] + prevs[1];
        prevs[0] = prevs[1];
        prevs[1] = fib;
        cout <<  fib<< "\n";
    }
    return 0;
}
