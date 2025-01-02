#include <iostream>
#include <cmath>

int main() {
    double radio; 
    std::cin >> radio; 

    double Perimetro = radio * 2 * M_PI;
    double Area = pow(radio, 2) * M_PI;

    std::cout << "Area: " << Area << std::endl; 
    std::cout << "Perimetro: " << Perimetro << std::endl; 
    return 0; 
}