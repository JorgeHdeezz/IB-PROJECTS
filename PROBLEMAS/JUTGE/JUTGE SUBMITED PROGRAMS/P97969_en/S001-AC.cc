#include <iostream>

int main() {
    char c = ' ';
    int contador = 0;

    while(c != '.') {
        std::cin >> c;
        if (c == 'a') {
            contador++;
        }
    }
    std::cout << contador << std::endl;   
}