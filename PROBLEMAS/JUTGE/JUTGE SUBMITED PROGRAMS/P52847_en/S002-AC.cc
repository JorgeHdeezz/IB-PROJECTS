#include <iostream>

int main () {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b && a > c){
        std::cout << a << std::endl;
    } if (b > a && b > c){
        std::cout << b << std::endl;
    } if (c > a && c > b) {
        std::cout << c << std::endl;
    }
    return 0;
}