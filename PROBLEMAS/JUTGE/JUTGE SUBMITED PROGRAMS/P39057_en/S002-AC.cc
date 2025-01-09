#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string forma;
        std::cin >> forma;

        if (forma == "rectangle"){
            double largo, ancho;
            std::cin >> largo >> ancho;
            double area = largo * ancho;
            std::cout << std::fixed << std::setprecision(6) << area << std::endl;

        } else if (forma == "circle") {
            double radio;
            std::cin >> radio;
            double area = M_PI * radio * radio;
            std::cout << std::fixed << std::setprecision(6) << area << std::endl;
        }
    }
    return 0;
}