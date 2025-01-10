#include <iostream>
#include <algorithm>

void swap(int a, int b) {
  return std::swap(a, b);
}

int main() {
  int a, b; 
  while (std::cin >> a >> b) {
    std::swap (a, b);
    std::cout << a << " " << b << std::endl;
  }
}