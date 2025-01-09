#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x;
    std::cin >> x;

    if (x >= 0) {
        double floor_x = floor(x);
        double ceil_x = ceil(x);
        double round_x = round(x);

        std::cout << std::fixed << std::setprecision(0);
        
        std::cout << floor_x << " " << ceil_x << " " << round_x << std::endl;
        } else {
            return 0;
        }
    return 0;
}
