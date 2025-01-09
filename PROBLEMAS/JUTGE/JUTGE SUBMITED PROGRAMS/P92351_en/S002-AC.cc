/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101548036
 * @date 8 Oct 2023
 * @brief Integer division and remainder of an integer number by a natural number
 *
 */
#include <iostream>

int main() {
  int a, b;
  b > 0;
  std::cin >> a;
  std::cin >> b;
  int d, r;
  d = a / b;
  r = a % b;

if (r < 0) {
  std::cout << d - 1 << " " << r + b << std::endl;
}
else {
  std::cout << d << " " << r << std::endl;
}
return 0;
}

