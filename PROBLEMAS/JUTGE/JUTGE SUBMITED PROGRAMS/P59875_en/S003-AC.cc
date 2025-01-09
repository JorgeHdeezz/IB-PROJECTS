#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    if (x < y) {
        while (x <= y) {
            std::cout << y << std::endl;
            y--;
        }
    } else if (x > y) {
    while (x >= y) {
        std::cout << x << std::endl;
        x--;
    }
    } else {
        std::cout << x << std::endl;
    }
}