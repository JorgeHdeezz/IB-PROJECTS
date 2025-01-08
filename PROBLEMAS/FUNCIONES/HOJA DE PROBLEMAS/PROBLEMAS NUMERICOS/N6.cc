#include <iostream>

int PasarBinarioDecimal(int binario) {
    int decimal = 0;
    int base = 1;
    while (binario > 0) {
        int digito = binario % 10;
        binario /= 10;
        decimal += digito * base;
        base *= 2;
    }
    return decimal;
}

int main() {
    int binario; 
    std::cin >> binario; 
    int decimal = PasarBinarioDecimal(binario);
    std::cout << decimal << std::endl;
    return 0; 
}