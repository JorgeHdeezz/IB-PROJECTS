#include <iostream> 
#include <iomanip>

int main() {
    double cm;  // centimeters
    std::cout << "Introduzca longitud: " << std::endl; 
    std::cin >> cm ; 

    double pulgadas = cm  * 0.393701;  // conversion a pulgadas
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << cm << " cm = " <<  pulgadas << " pulgadas" << std::endl;

    return 0;
}