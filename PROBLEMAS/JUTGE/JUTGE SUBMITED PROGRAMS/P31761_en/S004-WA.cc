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

// Function to compute the product of two numbers
int computeProduct(int num1, int num2) {
    int product = num1 * num2;
    return product;
}

int main() {
    // Get user input
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    // Compute and display the product
    int result = computeProduct(num1, num2);
    std::cout << result << std::endl;

    return 0;
}