#include <iostream>

int main () {
	int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 and y1 == y2) std::cout << '=' << std::endl;
    else if (x1 <= x2 and y1 >= y2) std::cout << 2 << std::endl;
    else if (x1 >= x2 and y1 <= y2) std::cout << 1 << std::endl;
    else std::cout << '?' << std::endl;
    return 0;
}