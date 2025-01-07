#include <iostream>
#include <vector>

void collatz (int n) {
    if(n <= 0) {
        std::cout << "Por favor, introduzca un numero entero positivo. " << std::endl;
        return 1; 
    }

    int pasos = 0; 
    std::vector<int> secuencia; 

    while (n != 1) {
        secuecncia.push_back(n); 
        if (n % 2 == 0) {
            n /= 2; 
        } else {
            n = 3*n + 1;
        }
        pasos++;
    }
    secuencia.push_back(1); 

    std::cout << "Secuencia: "; 
    for (int num : secuencia) {
        std::cout << num << " "; 
    }
    std::cout << std::endl; 
    std::cout << "Numero de pasos; " << pasos << std::endl;
}

int main() {
    int numero; 
    std::cout << "Introduce un número entero positivo: "; 
    std::cin >> numero; 
    std::cout << std::endl; 

    if(std::cin.fail() || numero <= 0) {
        std::cout << "El valor introducido no es válido. " << std::endl; 
    } else {
        collatz(numero); 
    }
    return 0;
}