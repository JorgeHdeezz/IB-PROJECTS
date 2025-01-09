#include <iostream>

int main () {
	int a,b;
    while (std::cin >> a) {
        std::cin >> b;
        int cont = 0, r = 1; 
        while (b >= r) {
            r *= a;
            cont++;
        }
        std::cout << cont - 1 << std::endl;
    }
    return 0;
}