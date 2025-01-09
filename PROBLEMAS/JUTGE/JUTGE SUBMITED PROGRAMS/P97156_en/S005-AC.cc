#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    for (int i = a; i < b; i++) {
        std::cout << i << ",";
    }
    if (b >= a) {
        std::cout << b;
    }
    std::cout << std::endl;
}
    
    
    
