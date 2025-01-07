#include <iostream>
#include <cstdlib>
#include "funciones.h"

void Usage(int argc, char* argv[]); 

int main(int argc, char* argv[]) {
    Usage(argc, argv); 

    int n = std::atoi(argv[1]); 
    std::cout << "La suma de los primeros terminos " << n << " números de Fibonacci es: " << FibonacciSum(n) << std::endl; 

    return 0; 
}

void Usage(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << argv[0] << ": falta un parámetro (número entero). ";
        std::cout << "Pruebe '" << argv[0] << " --help' para más información. "; 
        exit(EXIT_FAILURE);  
    }

    std::string arg = argv[1]; 
    if (arg == "--help") {
        std::cout << "Este programa calcula la suma de los primeros n números de Fibonacci. ";
        std::cout << "Uso: " << argv[0] << " <número entereo> ";
        exit(EXIT_SUCCESS);
    }
}