//Challenge 6 is to Calculate 10! with Reminder n! = 1 * 2 * … * n

#include <iostream>
using namespace std;

int main() {
    int n=10;
    long factorial = 1.0;

        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    

    return 0;
}
