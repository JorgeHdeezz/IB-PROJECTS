#include <iostream>
#include <string>
#include <sstream>

std::string ProcedeAlfabeticamente(const std::string& str1, const std::string& str2) {
    if (str1 < str2) {
        return str2;
    } else if (str1 > str2) {
        return str1;
    } else {
        return str1 + " y " + str2 + " son iguales alfabéticamente";
    }
}

int main() {
    std::string input, cadena1, cadena2;
    std::cout << "Introduce las dos cadenas separadas por un espacio: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    iss >> cadena1 >> cadena2;

    std::cout << ProcedeAlfabeticamente(cadena1, cadena2) << std::endl;

    return 0;
}