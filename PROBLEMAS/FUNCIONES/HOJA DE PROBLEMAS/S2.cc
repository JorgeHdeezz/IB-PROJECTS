#include <iostream>
#include <string>

std::string CambiarLetras(std::string str) {
    for(char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str; 
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << CambiarLetras(input) << std::endl;
    return 0;
}