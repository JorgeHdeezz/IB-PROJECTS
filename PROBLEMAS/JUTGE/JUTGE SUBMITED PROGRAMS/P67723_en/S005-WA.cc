#include <iostream>

int egcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return egcd(b, a % b);
}

int main () {
    int num1, num2;
    std::cin >> num1, num2;

    int resultado = egcd(num1, num2);
    std::cout << "The gcd of " << num1 << " and " << num2 << " is " << resultado  << '.' << std::endl;
}