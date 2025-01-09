#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    for(int i = 0; i <= n; i++) {
        std::cout << i * i * i << ",";
    }
    std::cout << n * n * n << std::endl;

    return 0;
}