//Challenge 16 is to Create a function that will return a Boolean specifying if a number is prime

#include <iostream>
bool is_prime(int num) {
  if (num <= 1) return false;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  int num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  if (is_prime(num)) {
    std::cout << num << " is prime" << std::endl;
  } else {
    std::cout << num << " is not prime" << std::endl;
  }
  return 0;
}
