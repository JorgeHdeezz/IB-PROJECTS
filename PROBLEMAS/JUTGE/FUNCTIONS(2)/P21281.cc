#include <iostream>
#include <cmath>

void frequentFactor(int n, int& f, int& q) {
  int factor = 2; 
  int max_count = 0;
  while (n % factor == 0) {
    n /= factor; 
    ++max_count;
  }

  f = factor;
  q = max_count;

  for (int i = 3; i <= sqrt(n); i += 2) {
    int count = 0;
    while (n % i == 0) {
      n /= i;
      ++count;
    }
    if (count > q) {
      f = i;
      q = count;
    }
  }

  if (n > 1 && q == 0) {
    f = n;
    q = 1;
  }
}

int main() {
  int n, f, q; 
  while (std::cin >> n) {
    frequentFactor(n, f, q);
    std::cout << f << " " << q << std::endl;
  }
}