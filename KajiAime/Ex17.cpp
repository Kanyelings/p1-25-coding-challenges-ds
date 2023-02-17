#include <iostream>

using namespace std;

int cntDig(int num){
    int sum = 0;
    string nmb = to_string(num);
    for(int i=0; i<sizeof nmb/8; i++){
        sum += nmb[i]-48;
    }
    return sum;
}

int main()
{
    cout << cntDig(4132);
    return 0;
}
