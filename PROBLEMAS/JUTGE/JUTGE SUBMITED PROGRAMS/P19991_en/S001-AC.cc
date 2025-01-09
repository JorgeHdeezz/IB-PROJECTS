#include <iostream>

int main () {
	int n;
    char ch;
    int res = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> ch;
            if (i == j || i + j == n-1) res += (int)ch-'0';
        }
    }
    std::cout << res << std::endl;
}
