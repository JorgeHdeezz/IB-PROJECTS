#include <iostream>

int main () {
	int n;
    std::cin >> n;
    while (n > 1) {
        std::cout << n%2;
        n/=2;
    }
    if (n == 0) std::cout << 0 << std::endl;
    else std::cout << 1 << std::endl;
}