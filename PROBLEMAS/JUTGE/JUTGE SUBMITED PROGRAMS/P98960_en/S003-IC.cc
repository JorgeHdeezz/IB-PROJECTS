#include <iostream>
int main () {
    char letra_mayuscula;
    std::cout << "Introduce una letra mayuscula: ";
    std::cin >> letra_mayuscula;

    if (letra_mayuscula >= 'A' && letra_mayuscula <= 'Z') {
        char letra_minuscula = letra_mayuscula + 32;
        std::cout << "La letra minúscula correspondiente es: " << letra_minuscula << std::endl;
    }
    else {
        std::cout << "No has introducido una letra mayúscula valida" << std::endl;
        return 0;
    }
    return 0;
    }
