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
    std::cout << "The gcd of " << a << " and " << b << " is " << gcd(a,b)  << '.' << std::endl;
}