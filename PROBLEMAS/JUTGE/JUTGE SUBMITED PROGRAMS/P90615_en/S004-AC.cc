#include <iostream>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    
    if (a >= b && a >= c){
        std::cout << int(a) << std::endl;

    }else if(b >= a && b >= c) 
        std::cout << int(b) << std::endl;
    else
        std::cout << int(c) << std::endl;         
    
    return 0;
}