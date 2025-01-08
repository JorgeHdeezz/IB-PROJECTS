#include <iostream>
#include <string>

std::string substr(const std::string& str, size_t pos, size_t len) {
    if (pos >= str.length()) {
        return ""; // Return an empty string if pos is out of bounds
    }
    return str.substr(pos, len);
}

int main() {
    std::string input;
    size_t pos, len;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Enter the starting position: ";
    std::cin >> pos;
    std::cout << "Enter the length of the substring: ";
    std::cin >> len;

    std::string result = substr(input, pos, len);
    std::cout << "Substring: " << result << std::endl;

    return 0;
}