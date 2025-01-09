#include <iostream>

int main () {
	int n;
    std::cin >> n;

    if(n % 100 == 0) {
        if (n % 400 == 0) {
            std::cout << "YES" << std::endl;
        } else if (n % 400 != 0) {
            std::cout << "NO" << std::endl;
        } else if (n % 4 == 0) {
            std::cout << "YES" << std::endl;
        } else if (n % 4 != 0) {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}