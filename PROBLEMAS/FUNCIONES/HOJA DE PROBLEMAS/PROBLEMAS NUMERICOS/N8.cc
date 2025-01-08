#include <iostream>

// Función para calcular el factorial de un número
int Factorial(int n) {
    if (n < 0) {
        std::cerr << "Error: n debe ser mayor o igual a 0" << std::endl;
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Función para calcular el coeficiente binomial
double CoeficienteBinomial(int n, int k) {
    if (n < 0 || k < 0 || k > n) {
        std::cerr << "Error: n y k deben ser mayores o iguales a 0 y k debe ser menor o igual a n" << std::endl;
        return 1;
    }
    int Numerador = Factorial(n);
    int Denominador = Factorial(k) * Factorial(n - k);
    return static_cast<double>(Numerador) / Denominador;
}

int main() {
    int n, k;
    std::cout << "Introduce los valores de n y k: ";
    std::cin >> n >> k;
    std::cout << "Coeficiente binomial (" << n << " sobre " << k << ") = " << CoeficienteBinomial(n, k) << std::endl;
    return 0;
}