#include <iostream>
#include <cmath>

int main() {
    int a, b;   // base y exponente
    std::cin >> a >> b;

    if (a == 0) {
        std::cout << 0 << std::endl; 
    } else if (b == 0) {
        std::cout << 1 << std::endl;
    } else {
        double result = pow(a, b);
        std::cout << result << std::endl;
    }

    return 0; 
}
    
    
    
    
    
    
    
