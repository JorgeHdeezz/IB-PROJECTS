#include <iostream>

int main() {

    int hora_actual; 
    std::cout << "Ingrese la hora actual en formato 24 horas: ";
    std::cin >> hora_actual; 
    std::cout << std::endl; 
    
    int cantidad_horas; 
    std::cout << "Ingrese la cantidad de horas: "; 
    std::cin >> cantidad_horas;
    std::cout << std::endl;

    if (hora_actual < 0 || hora_actual > 23) {
        std::cerr << "Error : La hora debe ser entre 0 y 23." << std::endl;
        return 1;
    } 

    int nueva_hora = ( hora_actual + cantidad_horas ) % 24;
    std::cout << "En " << cantidad_horas << " horas, la hora actual sera: " << nueva_hora << std::endl;
    return 0; 

}