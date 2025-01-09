#include <iostream>

int contadorCeros(int num) {
    int contador = 0;
    while (num % 10 == 0) {
        contador++;
        num /= 10;
    }
    return contador;
}
void imprimirceros(int num) {
    int reverso = 0;
    int originalNum = num;
    while (num > 0) {
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }

    int ceros = contadorCeros(originalNum);

    while (ceros > 0) {
        std::cout << 0;
        ceros--;
    }

    std::cout << reverso << std::endl;
}

int main() {
    int num;
    std::cin >> num;
    if (num == 0) {
        std::cout << num << std::endl;
    } else {
    imprimirceros(num);
    }
    return 0;
}