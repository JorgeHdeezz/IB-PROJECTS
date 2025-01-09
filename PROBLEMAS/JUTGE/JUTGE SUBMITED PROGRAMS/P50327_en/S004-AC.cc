#include <iostream>

int contadorCeros(int num) {
    int count = 0;
    while (num % 10 == 0) {
        count++;
        num /= 10;
    }
    return count;
}
void imprimirceros(int num) {
    int reversed = 0;
    int originalNum = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    int zeros = contadorCeros(originalNum);

    while (zeros > 0) {
        std::cout << 0;
        zeros--;
    }

    std::cout << reversed << std::endl;
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