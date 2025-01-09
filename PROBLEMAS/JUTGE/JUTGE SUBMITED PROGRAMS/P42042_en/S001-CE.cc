#include <iostream>

int main() {
    char letra;
    std::cin >> letra;

    if (letra >= 'A' && letra <= 'Z'){
        std::cout << "uppercase" << std::endl;
    } else if (letra >= 'a' && letra <= 'z') {
        std::cout << "lowercase" << std::endl;
      else{
        return 0;
      }
    }
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "vowel" << std::endl;
    } else {
        std::cout << "consonant" << std::endl;
    }
    return 0;
}