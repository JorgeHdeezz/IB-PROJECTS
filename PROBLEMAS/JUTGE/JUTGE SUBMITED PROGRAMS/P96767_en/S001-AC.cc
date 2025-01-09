#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
    int contador = 0;
    double x, n, resultado = 0;
    std::cin >> x;

    while (std::cin >> n) {
        resultado += n*pow(x, contador);
        contador++;
    }
    std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
 
}