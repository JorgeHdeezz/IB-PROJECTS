#include <iostream>

int main() {
    int first, last; 
    std::cin >> first >> last;
    while (first <= last) {
        std::cout << first << std::endl;
        ++first;
    }
    return 0;
    
}