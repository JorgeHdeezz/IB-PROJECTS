#include <iostream>
#include <cmath>

// Función para mostrar los factores primos de un número entero
void MostrarFactoresPrimos(int n) {
    if (n < 2) {
        std::cerr << "Error: n debe ser mayor o igual a 2" << std::endl;
        return;
    }

    std::cout << "Factores primos de " << n << ": ";
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    MostrarFactoresPrimos(n);
    return 0;
}