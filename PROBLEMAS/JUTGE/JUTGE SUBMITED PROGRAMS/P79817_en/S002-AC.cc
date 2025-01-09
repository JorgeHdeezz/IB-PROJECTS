#include <iostream>
#include <math.h>

int main () {
	int a, b;
    while (std::cin >> a) {
        int r = 1;
        std::cin >> b;
        for (int i = 0; i < b; i++) r *= a;
        std::cout << r << std::endl;
    }
    return 0;
}