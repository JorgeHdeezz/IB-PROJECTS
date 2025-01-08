#include <iostream>
#include <string>

std::string CountVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return "Number of vowels: " + std::to_string(count);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << CountVowels(input) << std::endl;
    return 0;
}