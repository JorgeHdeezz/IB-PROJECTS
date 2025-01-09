#include <iostream>

int main() {
    int n; 
    std::cin >> n; 

    for (int i = 1; i <= n; ++i) {
        int isquare += i*i;
        std::cout << isquare << std::endl;
    }
}