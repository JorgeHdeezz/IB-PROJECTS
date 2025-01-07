#include <iostream>
#include <iomanip>

int main() {
    double first, second, third, fourth; 
    std::cout << "Primer valor: ";
    std::cin >> first;
    std::cout << std::endl;  
    std::cout << "Segundo valor: ";
    std::cin >> second;
    std::cout << std::endl;
    std::cout << "Tercer valor: ";  
    std::cin >> third;
    std::cout << std::endl;
    std::cout << "Cuarto valor: "; 
    std::cin >> fourth;
    std::cout << std::endl;
    std::cout << "El promedio es: "; 
    std::cout << std::fixed << std::setprecision(2) << (first + second + third  + fourth) / 4.0 << std::endl;
    return 0; 
}