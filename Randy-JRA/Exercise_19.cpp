//Challenge 19 is to Create a c++ function that will return in an array the first "nPrimes" 
//prime numbers greater than a number "startAt"

#include <iostream>
#include <vector>

bool is_prime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i < n; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

std::vector<int> first_n_primes(int startAt, int nPrimes) {
  std::vector<int> primes;
  int num = startAt;
  while (primes.size() < nPrimes) {
    if (is_prime(num)) primes.push_back(num);
    ++num;
  }
  return primes;
}

int main() {
  int startAt, nPrimes;
  std::cin >> startAt >> nPrimes;
  std::vector<int> primes = first_n_primes(startAt, nPrimes);
  for (int p : primes) std::cout << p << ' ';
  std::cout << std::endl;
  return 0;
}

