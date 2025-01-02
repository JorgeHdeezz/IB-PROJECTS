#include <iostream>

int main() {

    int anio_nacimiento;
    int anio_actual;

    std::cout << "Año de nacimiento: ";    
    std::cin >> anio_nacimiento;
    std::cout << std::endl; 
 
    std::cin >> anio_actual;  
    std::cout << "Año actual: ";
    std::cout << std::endl; 

    std::cout << "Su edad es: " << anio_actual - anio_nacimiento << " años" << std::endl; 
    return 0;

}