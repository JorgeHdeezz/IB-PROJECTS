#include <iostream>
#include <vector>

// Función para convertir un número en base decimal a otra base
std::vector<int> ConvertirBase(int numero, int base) {
    if (numero <= 0 || base <= 1) {
        std::cerr << "Error: El número debe ser mayor que cero y la base debe ser mayor que uno." << std::endl;
        return {};
    }

    std::vector<int> restos;
    while (numero > 0) {
        int resto = numero % base;
        restos.push_back(resto);
        numero /= base;
    }

    return restos;
}

int main() {
    int numero, base;
    std::cout << "Introduce un número entero mayor que cero: ";
    std::cin >> numero;
    std::cout << "Introduce la base numérica (mayor que uno): ";
    std::cin >> base;

    std::vector<int> resultado = ConvertirBase(numero, base);
    if (!resultado.empty()) {
        std::cout << "La secuencia de restos en orden inverso es: ";
        for (int resto : resultado) {
            std::cout << resto << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}