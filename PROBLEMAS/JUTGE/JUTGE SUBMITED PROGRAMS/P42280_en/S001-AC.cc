#include <iostream>

int main () {
	int f,c;
    std::cin >> f >> c;
    char ch;
    int res = 0;
    for (int i = 0; i < f * c; i++) {
        std::cin >> ch;
        res += (int)ch - '0';
    }
    std::cout << res << std::endl;
}