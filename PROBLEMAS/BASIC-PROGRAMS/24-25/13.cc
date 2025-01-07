#include <iostream>

int main() {

    int number;  

    std::cout << "Introduce un numero entero: "; 
    std::cin >> number; 
    std::cout << std::endl; 

    // Verificamos si el número tiene exactamente tres dígitos
    if (number < 100 || number > 999) {
        std::cerr << "Error: El número debe tener exactamente tres dígitos." << std::endl;
        return 1;
    }

    // Extraer los dígitos individuales
    int unidad = number % 10;          // Último dígito
    int decena = (number / 10) % 10;   // Dígito del medio
    int centena = number / 100;        // Primer dígito

    // Calcular el número invertido
    int inverso = (unidad * 100) + (decena * 10) + centena;

    std::cout << "El inverso del número es: " << inverso << std::endl;
    return 0;
}