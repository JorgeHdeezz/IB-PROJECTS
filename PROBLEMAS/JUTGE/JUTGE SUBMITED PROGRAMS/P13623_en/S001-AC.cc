#include <iostream>

int main () {
	int f, c;
    std::cin >> f >> c;
    char ch;
    int res = 0;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> ch;
            if (i % 2 == j % 2) res += (int)ch -'0';
        } 
    }
    std::cout << res << std::endl;
    return 0;
}