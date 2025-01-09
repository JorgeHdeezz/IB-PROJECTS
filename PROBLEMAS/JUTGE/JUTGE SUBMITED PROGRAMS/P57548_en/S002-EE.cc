#include <iostream>

int main() {
  int a, b;
  std::cin >> a;
  std::cin >> b;
  int d, r;
  d = a / b;
  r = a % b;
  std::cout << d << " " << r << std::endl;
}

