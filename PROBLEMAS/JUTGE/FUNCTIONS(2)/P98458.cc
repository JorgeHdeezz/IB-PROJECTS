#include <iostream>
#include <cmath>

void min_Max(int a, int b, int mn, int mx) {
  mn = std::min(a, b);
  mx = std::max(a, b);
  std::cout << mn << " " << mx << std::endl;
  return; 
}

int main() {
  int a, b; 
  while (std::cin >> a >> b) {
    int minimo, maximo; 
    min_Max(a, b, minimo, maximo);
  }

}