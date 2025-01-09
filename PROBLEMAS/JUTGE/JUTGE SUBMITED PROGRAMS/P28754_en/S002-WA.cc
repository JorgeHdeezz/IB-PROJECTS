#include <iostream>

void reversoBinario(int num) {
    int binario[32];
    int i = 0;

    while (num > 0) {
        binario[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; i >= 0; i--) {
        std::cout << binario[i];
    }
    std::cout << std::endl;
}

int main () {
    int decimal;
    std::cin >> decimal;

    reversoBinario(decimal);

    return 0;
}