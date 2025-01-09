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

int main() {
    double a, b,;
    std::cin >> a >> b;
    a >= 0;
    b >= 0;
if (a >= 0 && b >= 0) {
        int p;
        p = a * b;
        std::cout << p << std::endl;
    }
else {
    return 0;
}
return 0;
}