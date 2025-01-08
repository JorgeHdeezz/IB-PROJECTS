#include <iostream>
#include <string>
#include <sstream>

std::string Acronimo(std::string str) {
    std::stringstream ss(str); 
    std::string word; 
    std::string acronimo; 

    while(ss >> word) {
        if(!word.empty()) {
            acronimo += toupper(word[0]); 
        }
    }
    return acronimo;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << Acronimo(input) << std::endl;
    return 0;
}