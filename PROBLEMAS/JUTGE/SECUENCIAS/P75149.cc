#include <iostream>
#include <string>
#include <vector>

bool hayA(const std::vector<std::string>& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == "a") {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<std::string> str;
    std::string word;

    // Leer las cadenas de entrada
    while (std::cin >> word) {
        str.push_back(word);
    }

    if (hayA(str)) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}