#include <iostream>
#include <cmath>

int main() {

    int number; 

    std::cout << "Introduzca un número: "; 
    std::cin >> number; 
    std::cout << std::endl; 

    for(int n; n <= number; n++) {
        int potencia = pow(2, n); 
        std::cout << potencia << " "; 
    }
    return 0; 
}