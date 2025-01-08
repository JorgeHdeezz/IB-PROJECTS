#include <iostream>
#include <string>

int EncontrarLetra(std::string str, char Letra) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == Letra) {
            return i; // Devuelve la posición de la letra
        }
    }
    return -1; // Devuelve -1 si la letra no se encuentra
}

int main() {
    std::string input;
    char letra;
    std::cout << "Introduce una cadena: ";
    std::getline(std::cin, input);
    std::cout << "Introduce una letra a buscar: ";
    std::cin >> letra;
    int posicion = EncontrarLetra(input, letra);
    if (posicion != -1) {
        std::cout << "La letra '" << letra << "' se encuentra en la posición: " << posicion << std::endl;
    } else {
        std::cout << "La letra '" << letra << "' no se encuentra en la cadena." << std::endl;
    }
    return 0;
}