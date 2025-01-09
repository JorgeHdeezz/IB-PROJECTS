#include <iostream>

int main () {
    std::string a, b;
    std::cin >> a >> b;
    if (a == b) std::cout << a << " = " << b << std::endl;
    else if (a < b) std::cout << a << " < " << b << std::endl;
    else std::cout << a << " > " << b << std::endl;
}