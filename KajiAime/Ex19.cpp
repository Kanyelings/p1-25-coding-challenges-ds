#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i=2; i<n/2; i++){
        if(n%i == 0){
            return false;
        }
    }return true;
}

int * printPrime(int p, int n)
{
    static int arr[100];
    int prime;
    int j = n+1;
    for(int i=0; i<p; i++){
        while(!isPrime(j)){
            j++;
        }
        arr[i] = j;
        j++;
    }
    return arr;
}

int main(){
    int *prime;
    int sz = 5;
    int lim = 7;
    prime = printPrime(sz, lim);
        for(int i=0; i<sz;i++){
            cout << prime[i]<< " ";
        }
    return 0;
}
