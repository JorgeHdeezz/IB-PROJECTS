#include <iostream>
#include <cmath>

double AreaTriangulo(int lado) {
     return sqrt(3) * pow(lado, 2) / 4;
}

int main() {
    int lado;
    std::cout << "Introduzca el lado del triangulo equilatero: ";
    std::cin >> lado;
    std::cout << "El area del triangulo equilatero es: " << AreaTriangulo(lado) << std::endl;
    return 0;
}