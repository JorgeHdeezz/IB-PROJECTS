//Autor: Jorge Hernández de Vicente
//Fecha: 2025-01-05
//Programa: Secuencia de collatz

#include <iostream>
#include <vector>

void collatz(int n) {
    if (n <= 0) {
        std::cout << "Por favor, introduce un número entero positivo." << std::endl; 
        return; 
    }

    int pasos = 0; 
    std::vector<int> secuencia; 

    while(n != 1) {
    secuancia.push_back(n); 
    if (n % 2 == 0) {
        n /= 2; 
        } else {
            n = n * 3 + 1; 
    }
    pasos++;
    }

    secuencia.push_back(1); 

    std::cout << "Secuencia: "; 
    for(int num: secuencia) {
    std::cout << num << " "; 
    }

    std::cout << std::endl; 
    std::cout << "Número de pasos: " << pasos + 1 << std::endl; 

}

int main() {
    int numero; 
    std::cout << "Introduce un número entero positivo: "; 
    std::cim >> numero;

    if(std::cin.fail() || numero <= 0) {
        std::cout << "El valor introducido no es válida. Por favor, introduce un número entero positivo." << std::endl;
    } else {
        collatz(numero); 
    }

    return 0; 
}