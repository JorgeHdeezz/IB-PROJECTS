#include <iostream>
#include <string>
#include <sstream>

bool Subcadena(std::string str1, std::string str2) {
    return str1.find(str2) != std::string::npos;
}

int main() {
    std::string input, cadena1, cadena2;
    std::cout << "Introduce las dos cadenas separadas por un espacio: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    iss >> cadena1 >> cadena2;

    if (Subcadena(cadena1, cadena2)) {
        std::cout << "La segunda cadena es una subcadena de la primera." << std::endl;
    } else {
        std::cout << "La segunda cadena NO es una subcadena de la primera." << std::endl;
    }

    return 0;
}