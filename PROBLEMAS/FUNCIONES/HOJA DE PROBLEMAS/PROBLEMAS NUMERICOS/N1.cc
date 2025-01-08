#include <iostream>
#include <cmath>

bool pitagorica(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        std::cerr << "Error: Los lados deben ser mayores que 0" << std::endl;
        return 1;
    }
    if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c; 
    std::cout << "Introduce el primer lado: ";
    std::cin >> a;
    std::cout << "Introduce el segundo lado: ";
    std::cin >> b;
    std::cout << "Introduce el tercer lado: ";
    std::cin >> c;

    if (pitagorica(a, b, c)) {
        std::cout << "Los lados son pitagoricos" << std::endl;
    } else {
        std::cout << "Los lados no son pitagoricos" << std::endl;
    }
    return 0; 
}