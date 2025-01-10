#include <iostream>
#include <cmath>
#include <numeric>

void readRational(int& num, int& den) {
  std::cin >> num >> den;

  if (num < 1 || den < 1) {
    return; 
  } else if (num > pow(10, 9) || den > pow(10, 9)) {
    return;
  } else {
//  Simplify the fraction
    int gcd = std::gcd(num, den);
    num /= gcd;
    den /= gcd;
    if (den < 0) {
      num *= -1;
      den *= -1;
    }
  }
}

int main() {
  int num, den; 
  readRational(num, den);
  std::cout << num << " " << den << std::endl;
  return 0; 
}
