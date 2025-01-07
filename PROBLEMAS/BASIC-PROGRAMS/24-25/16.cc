#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1; // Usamos un tipo de dato más grande para manejar valores grandes

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> n;

    // Validar que el número es positivo
    if (n < 0) {
        std::cerr << "Error: El factorial no está definido para números negativos." << std::endl;
        return 1;
    }

    std::cout << n << "! = ";

    while (n > 0) {
        factorial *= n; 
        std::cout << n << " "; 
        n--;
    }

    std::cout << "= " << factorial << "." << std::endl; 

//     // Calcular el factorial
//     for (int i = 1; i <= n; ++i) {
//         factorial *= i;
//         std::cout << i << " "; 
//     }

//     std::cout << "El factorial de " << n << " es: " << factorial << std::endl;

//     return 0;
 }
