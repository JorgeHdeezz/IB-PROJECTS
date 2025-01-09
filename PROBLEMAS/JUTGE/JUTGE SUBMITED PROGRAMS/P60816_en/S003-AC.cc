#include <iostream>

int main () {
	int n;
    std::cin >> n;
    while(n > 15) {
        int temp = n % 16;
        n /= 16;
        if (temp >= 10) std::cout << (char)(temp+'A'-10);
        else std::cout << temp;
    }
    if (n >= 10) std::cout << (char)(n+'A'-10) << std::endl;
    else std::cout << n << std::endl;
}