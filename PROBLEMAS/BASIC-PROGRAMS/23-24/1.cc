#include <iostream>

int main() {
    int a; 
    std::cin >> a; 

    if (a % 2 == 0) {
        std::cout << "Par" << std::endl; 
    } else {
        std::cout << "Impar" << std::endl;
    }
    return 0; 
}