#include <iostream>

int main () {
	long long n,m;
    while (std::cin >> n) {
        int res = 0;
        m = n;
        while (n >= 1) {
            res += n % 10;
            n /= 10;
        }
        std::cout << "The sum of the digits of " << m << " is " << res << '.' << std::endl;
    }
    return 0;
}