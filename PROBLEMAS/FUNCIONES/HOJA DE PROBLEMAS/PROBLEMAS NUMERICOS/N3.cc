#include <iostream>
#include <cmath>

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

// Función para calcular el signo alternante
int Signo(int n) {
    return (n % 2 == 0) ? 1 : -1;
}

// Función para aproximar el seno usando la serie de Taylor
double SenoAprox(int n, double x) {
    double resultado = 0.0;
    for (int i = 0; i <= n; ++i) {
        resultado += Signo(i) * std::pow(x, 2 * i + 1) / Factorial(2 * i + 1);
    }
    return resultado;
}

// Función para aproximar el coseno usando la serie de Taylor
double CosenoAprox(int n, double x) {
    double resultado = 0.0;
    for (int i = 0; i <= n; ++i) {
        resultado += Signo(i) * std::pow(x, 2 * i) / Factorial(2 * i);
    }
    return resultado;
}

int main() {
    int n;
    double x;

    std::cout << "Introduce el número de términos de la serie de Taylor (n): ";
    std::cin >> n;
    std::cout << "Introduce el valor de x: ";
    std::cin >> x;

    std::cout << "Aproximación del seno de " << x << " usando " << n << " términos: " << SenoAprox(n, x) << std::endl;
    std::cout << "Aproximación del coseno de " << x << " usando " << n << " términos: " << CosenoAprox(n, x) << std::endl;

    return 0;
}