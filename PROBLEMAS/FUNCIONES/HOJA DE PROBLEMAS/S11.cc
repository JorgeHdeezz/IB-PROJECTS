#include <iostream>
#include <string>

std::string combinarCadenas(const std::string& str1, const std::string& str2) {
    std::string resultado;
    size_t minLength = std::min(str1.length(), str2.length());

    for (size_t i = 0; i < minLength; ++i) {
        resultado += str1[i];
        resultado += str2[i];
    }

    return resultado;
}

int main() {
    std::string cadena1, cadena2;
    std::cout << "Introduce la primera cadena: ";
    std::getline(std::cin, cadena1);
    std::cout << "Introduce la segunda cadena: ";
    std::getline(std::cin, cadena2);

    std::string resultado = combinarCadenas(cadena1, cadena2);
    std::cout << "La combinación de las cadenas es: " << resultado << std::endl;

    return 0;
}