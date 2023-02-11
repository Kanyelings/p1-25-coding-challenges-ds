//Challenge 15 is to Create a function that will find the
//nth Fibonacci number using recursion.
//Reminder:
//F(0) = 0
//F(1) = 1
//F(n) = F(n-1) + F(n-2)

#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
  return 0;
}
