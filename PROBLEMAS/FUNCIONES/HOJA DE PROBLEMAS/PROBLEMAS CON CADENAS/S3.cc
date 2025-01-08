#include <iostream>
#include <string>

std::string SiguienteLetra(std::string str) {
    for(char &c : str) {
        if (std::isalpha(c)) {
            if (c == 'z') {
                c = 'a';
            } else if (c == 'Z') {
                c = 'A';
            } else {
                c++;
            }
        }
    }
    return str; 
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << SiguienteLetra(input) << std::endl;
    return 0;
}