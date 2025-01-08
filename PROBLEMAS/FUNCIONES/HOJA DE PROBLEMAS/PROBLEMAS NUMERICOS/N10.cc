#include <iostream>

double Potencia(double base, int exponente) {
    double resultado = 1; // Inicializa el resultado en 1
    for (int i = 0; i < exponente; i++) {
        resultado *= base; // Multiplica el resultado por la base
    }
    return resultado; // Devuelve el resultado
}

int main() {
    double base; 
    int exponente; 

    std::cout << "Introduce la base: ";
    std::cin >> base; 
    std::cout << "Introduce el exponente: "; 
    std::cin >> exponente;
    std::cout << "El resultado de la potencia es: " << Potencia(base, exponente) << std::endl;
    return 0; 
}