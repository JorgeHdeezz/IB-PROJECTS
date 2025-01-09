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

long long p_large_numbers(long long a, long long b){
    return a * b;
}  
int main() {
    long long a, b;
    a > 0;
    b > 0;
    std::cin >> a >> b;
    long long product = p_large_numbers(a, b);
    std::cout << product << std::endl;
return 0;
}