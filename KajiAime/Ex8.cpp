#include <iostream>

using namespace std;

float celsiToFahr(int T){
    return (T*1.8)+32;
}

int main()
{
    cout << celsiToFahr(37);
    return 0;
}
