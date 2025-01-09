#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    
    if (a == b) {
    std::cout << a << std::endl; 
    } else if (a <= b) {  
    
    while (a < b){
        std::cout << a << ",";
        a++;
    } std::cout << b; }
}
