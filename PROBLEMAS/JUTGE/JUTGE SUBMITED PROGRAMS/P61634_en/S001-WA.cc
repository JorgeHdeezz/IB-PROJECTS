#include <iostream>

int main () {
	int n;
    std::cin >> n;
    if (n%100==0) {
        if (n%400==0) { std::cout << "YES" << std::endl;
        } else { std::cout << "NO" << std::endl;
    } if (n%4==0) { std::cout << "YES" << std::endl;
     } else { std::cout << "NO" << std::endl; }
    }
}