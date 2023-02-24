//Challenge 18 is to Print the first 100 prime numbers

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int i = 2;
    while (count < 100) {
        if (is_prime(i)) {
            cout << i << " ";
            count++;
        }
        i++;
    }
    return 0;
}
