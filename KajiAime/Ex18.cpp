#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            return false;
        }
    }return true;
}

int main()
{
    int prime, j;
    int i=0; 
    while(i<100){
        while(!isPrime(j)){
            j++;
            i++;
        }
        cout << j<< " ";
        j++;
    }
    return 0;
}
