#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    for(int i = 1; i < n; i++) {
        std::cout << i * i * i << "," << std::endl;
    }
    std::cout << n * n * n << std::endl;

    return 0;
}