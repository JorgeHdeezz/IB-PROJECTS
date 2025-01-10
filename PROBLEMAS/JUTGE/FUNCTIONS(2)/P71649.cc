#include <iostream>

void count_and_add(int& num, int& sum) {
  int n; 
  while (std::cin >> n) {
    num += 1;
    sum += n;
  }
  return; 
}

int main() {
  int num = 0, sum = 0; 
  count_and_add(num, sum);
  std::cout << num << " " << sum << std::endl;
  return 0;
}


