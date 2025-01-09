#include <iostream>

int main() {
    int c;
    std::cin >> c;

    if (c > 30) {
        std::cout << "it's hot" << std::endl;
    }
    else if (c < 10)
        std::cout << "it's cold" << std::endl;
    else
        std::cout << "it's ok" << std::endl;

    if (c >= 100) {
        std::cout << "water would boil" << std::endl;
    }
    else if (c <= 0)
        std::cout << "water would freeze" << std::endl;
    else
        return 0;
}
