#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main () {
    int num1, num2;
    std::cin >> num1, num2;

    int resultado = gcd(num1, num2);
    std::cout << "The gcd of " << num1 << " and " << num2 << " is " << gcd(num1,num2)  << '.' << std::endl;
}