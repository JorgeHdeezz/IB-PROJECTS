#include <iostream>

int main() {
    int n, isquare;
    isquare = 0; 
    std::cin >> n; 

    for (int i = 1; i <= n; ++i) {
        isquare += i*i;
        std::cout << isquare << std::endl;
    }
    return 0; 
}