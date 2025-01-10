#include <iostream>

void cross(int n, char c) {
  int mid = n / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == mid || j == mid) {
        std::cout << c; 
      } else {
        std::cout << " "; 
      }
    }
    std::cout << std::endl; 
  }
}

int main() {
  int n; 
  char c; 
  while (std::cin >> n >> c) {
    if (n < 3 || n % 2 == 0) { 
      
    } else {
      cross(n, c);
    }
  }
}