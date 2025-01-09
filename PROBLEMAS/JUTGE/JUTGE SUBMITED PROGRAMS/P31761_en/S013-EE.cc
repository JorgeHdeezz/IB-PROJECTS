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
   
   float a, b, c;
   short int i = 1;
   std::cin >> a >> b;

   while(i<=a) {
    c = c + b;
    i = i + 1;
   }
   std::cout << c << std::endl;
   return 0;
}