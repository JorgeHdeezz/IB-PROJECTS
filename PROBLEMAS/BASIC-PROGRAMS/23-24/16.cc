#include <iostream>
int main() {
    int n(0); 
    int total; 
    while (n <= 980) {
        if (n % 5 == 0 && n % 3 == 0) {
            std::cout << n << ", "; 
            total += n; 
            n = n + 1;          
        } else {
            n = n + 1; 
        }      
    }    
    std::cout << 990 << "."; 
    std::cout << std::endl; 
    std::cout << "El total es: " << total << std::endl; 
}
