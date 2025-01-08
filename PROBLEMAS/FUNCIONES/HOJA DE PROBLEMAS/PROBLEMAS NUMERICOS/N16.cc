#include <iostream>
#include <cmath>

int Facotrial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * Facotrial(n - 1);
    }
}

double PotencialAlternante(int i) {
    return std::pow(-1, i); 
}

int SubFactorial(int n) {
    int subfactorial = 0;
    for (int i = 0; i <= n; i++) {
        subfactorial += PotencialAlternante(i) * Facotrial(n) / Facotrial(i);
    }
    return subfactorial;
}

int main() {
    int n; 
    std::cout << "Introduce un número entero positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cerr << "Error: n debe ser mayor o igual a 0" << std::endl;
        return 1; 
    }

    int resultado = SubFactorial(n);
    std::cout << "El subfactorial de " << n << " es: " << resultado << std::endl;
    return 0;
}
