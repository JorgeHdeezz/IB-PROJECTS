
#include <iostream>

int main () {
	int n;
    std::cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) res += i*i;
    std::cout << res << std::endl;
return 0;
}