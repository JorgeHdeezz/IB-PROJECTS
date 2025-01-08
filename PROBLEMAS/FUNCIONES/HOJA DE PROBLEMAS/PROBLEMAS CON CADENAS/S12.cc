#include <iostream>
#include <string>

bool EstaOrdenada(const std::string& str) {
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] < str[i - 1]) {
            return false;
        }
    }
    return true;
}

std::string CombinarCadenas(const std::string& str1, const std::string& str2) {
    size_t i = 0, j = 0;
    std::string result;

    std::string c1 = str1 + "~";
    std::string c2 = str2 + "~";

    while (i < c1.size() - 1 || j < c2.size() - 1) {
        if (c1[i] < c2[j]) {
            result += c1[i];
            ++i;
        } else {
            result += c2[j];
            ++j;
        }
    }
    return result;
}

int main() {
    std::string str1, str2;
    std::cout << "Introduzca la primera cadena: ";
    std::cin >> str1;
    std::cout << "Introduzca la segunda cadena: ";
    std::cin >> str2;
    std::cout << std::endl;

    if (!EstaOrdenada(str1) || !EstaOrdenada(str2)) {
        std::cerr << "Error: Las cadenas deben estar ordenadas" << std::endl;
        return 1;
    } else {
        std::cout << "Las cadenas están ordenadas" << std::endl;
    }

    std::string result = CombinarCadenas(str1, str2);

    if (EstaOrdenada(str1) && EstaOrdenada(str2)) {
        std::cout << "Cadena combinada: " << result << std::endl;
    } else {
        std::cerr << "Error: La cadena combinada no está ordenada" << std::endl;
        return 1;
    }

    return 0; 

}