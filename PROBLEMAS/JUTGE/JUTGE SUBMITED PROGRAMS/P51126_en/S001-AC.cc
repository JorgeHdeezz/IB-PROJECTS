#include <iostream>

int main () {
	int x1, y1, x2,y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    x1 = std::max(x1 , x2);
    y1 = std::min(y1 , y2);
    if (x1 > y1) std::cout << "[]" << std::endl;
    else std::cout << '[' << x1 << ',' << y1 << ']' << std::endl;
    return 0;
}