#include <iostream>

using namespace std;

int main()
{
    int sm;
    for(int i=10; i<30; ++i){
        if(i%2==0){
            sm += i;
        }
    }
    cout << sm;
    return 0;
}
