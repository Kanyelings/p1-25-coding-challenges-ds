#include <iostream>

using namespace std;

int main()
{
    int arr [] = {1,3,2,2};
    float var = 0;
    for(int i=0; i< sizeof arr/sizeof arr[1]; i++){
        var += arr[i];
    }
    var /= sizeof arr/sizeof arr[1];
    cout << var;
    return 0;
}
