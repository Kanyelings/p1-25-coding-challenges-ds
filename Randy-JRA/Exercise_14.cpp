//Challenge 14 is to Print the first 10 Fibonacci numbers
//without using recursion.
//Reminder:
//F(0) = 0
//F(1) = 1
//F(n) = F(n-1) + F(n-2)

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    for (int i = 0; i < 10; i++)
        cout << fib(i) << " ";
    return 0;
}
