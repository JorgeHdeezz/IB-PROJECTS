#include <iostream>
#include <cmath> 

int main() {

    int number; 

    std::cout << "Introduzca un numero entero: "; 
    std::cin >> number; 
    std::cout << std::endl; 

    int digitos = (log10 (number) + 1); 

    std::cout << "El numero tiene " << digitos << " digitos." << std::endl;
    return 0; 
}