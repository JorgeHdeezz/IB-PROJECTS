#include <iostream>

int main () {
    char letra;
    std::cin >> letra;

    if (letra >= 'A' && letra <= 'Z') {
        char letra2 = letra + 32;
        std::cout << letra2 << std::endl;
    }
    else if (letra >= 'a' && letra <= 'z') {
        char letra3 = letra - 32;
        std::cout << letra3 << std::endl;
    }else{ 
        return 0;
    }
    return 0;
    }