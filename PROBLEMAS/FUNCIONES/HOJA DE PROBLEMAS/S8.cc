#include <iostream>
#include <string>

void procesarCadena(const std::string& input_string) {
    std::string one_more, one_less;
    std::string ascii_codes;

    for (size_t i = 0; i < input_string.length(); ++i) {
        char c = input_string[i];
        one_more += static_cast<char>(c + 1);
        one_less += static_cast<char>(c - 1);
        ascii_codes += std::to_string(static_cast<int>(c));
        if (i < input_string.length() - 1) {
            ascii_codes += "-";
        }
    }

    std::cout << "Cadena original: " << input_string << std::endl;
    std::cout << "Códigos ASCII de la cadena original: " << ascii_codes << std::endl;
    std::cout << "Cadena con caracteres incrementados: " << one_more << std::endl;
    std::cout << "Cadena con caracteres decrementados: " << one_less << std::endl;
}

int main() {
    std::string input_string;
    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, input_string);

    procesarCadena(input_string);

    return 0;
}