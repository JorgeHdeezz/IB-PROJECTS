#include <iostream>

int contadorDigitos(int num) {
    if (num == 0) {
        std::cout << 1 << std::endl;
    } else {
        int contador = 0;
        while (num != 0) {
            num /= 10;
            contador++;
        } 
        return contador;
    }
}

int main() {
    int natural;
    std::cin >> natural;

    int numeroDigitos = contadorDigitos(natural);
    std::cout << "The number of digits of " << natural << " is " << numeroDigitos << std::endl;

    return 0;

}