#include <iostream>

using namespace std;

float fahrToCelsi(int T){
    return (T-32)/1.8;
}

int main()
{
    cout << fahrToCelsi(98.6);
    return 0;
}
