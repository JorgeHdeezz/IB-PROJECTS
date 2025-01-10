#include <iostream>
#include <algorithm>

void sort3(int& a, int& b, int& c) {
  if (a > b) std::swap(a, b);
  if (a > c) std::swap(a, c);
  if (b > c) std::swap(b, c);
  return;
}

int main() {
  int a, b, c;

  while(std::cin >> a >> b >> c) {
    sort3(a, b, c);
    std::cout << a << " " << b << " " << c << std::endl;
  }
}