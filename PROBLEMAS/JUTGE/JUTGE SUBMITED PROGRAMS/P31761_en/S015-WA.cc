/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101548036
 * @date 8 Oct 2023
 * @brief Multiply
 *
 */

#include <iostream>

long long multiply(int a, int b) {
    long long product = 0;
    for (int i = 0; i < b; i++) {
        product += a;
    }
    return product;
}

int main() {
    int a, b;
    a >= 0;
    b >= 0;
    std::cin >> a >> b;
if (a >= 0 && b >= 0) {
      long long product = multiply(a, b);
      std::cout << product << std::endl;
    }
else {
    return 0;
}
return 0;
}