#include <iostream>

double CalcularAreaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

double CalcularVolumenCilindro(double radio, double altura) {
    return CalcularAreaCirculo(radio) * altura;
}

int main() {
    double radio, altura; 
    
    std::cout << "Introduce el radio: ";
    std::cin >> radio;
    std::cout << "Introduce la altura: ";
    std::cin >> altura;
    
    std::cout << "El area del circulo es: " << CalcularAreaCirculo(radio) << std::endl;
    std::cout << "El volumen del cilindro es: " << CalcularVolumenCilindro(radio, altura) << std::endl;
    return 0; 
    }