#include <iostream>
#include <cmath>

double AreaTriangulo(int lado) {
    return std::sin(M_PI / 3) * pow(lado,2) / 2;
}

int main() {
    int lado; 
    std::cin >> lado; 
    std::cout << AreaTriangulo(lado) << std::endl;
    return 0; 
}