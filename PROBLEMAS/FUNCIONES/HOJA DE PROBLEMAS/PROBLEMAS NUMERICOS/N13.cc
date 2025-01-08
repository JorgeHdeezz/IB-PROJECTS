#include <iostream>

double CalcularAreaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

double LongitudCircunferencia(double radio) {
    return 2 * 3.14159 * radio;
}

double CalcularToroide(double radio, double radio2) {
    return 2 * 3.14159 * radio2 * CalcularAreaCirculo(radio);
}

int main() {
    double radio, radio2; 

    std::cout << "Introduce el radio del circulo: ";
    std::cin >> radio;
    std::cout << "Introduce el radio del toroide: ";
    std::cin >> radio2;

    std::cout << "El area del circulo es: " << CalcularAreaCirculo(radio) << std::endl;
    std::cout << "La longitud de la circunferencia del circulo es: " << LongitudCircunferencia(radio) << std::endl;
    std::cout << "El area del toroide es: " << CalcularToroide(radio, radio2) << std::endl;

    return 0; 
}