#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main () {
    int a, b;
    std::cin >> a, b;

    int resultado = gcd(a, b);
    std::cout << resultado << std::endl;
}