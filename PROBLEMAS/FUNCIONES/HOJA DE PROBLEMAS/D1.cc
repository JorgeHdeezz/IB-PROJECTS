#include <iostream>

int digitoMaximo (int n) {
    if (n <= 0) {
        std::cerr << "Error: n deve ser maior que 0" << std::endl;
        return 1; 
    }

    int maxDigit = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10; 
    }
    return maxDigit;
}

int main() {
    int n; 
    std::cout << "Digite um numero inteiro positivo: ";
    std::cin >> n;
    int maxDigit = digitoMaximo(n);
    std::cout << "El digito maximo es: " << maxDigit << std::endl;
    return 0; 
}