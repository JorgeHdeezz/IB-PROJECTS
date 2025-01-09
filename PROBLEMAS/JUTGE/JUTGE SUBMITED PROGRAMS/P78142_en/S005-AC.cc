#include <iostream>
#include <iomanip>

int main() {
    double number;
    double sum = 0.0;
    int total = 0;

    while (std::cin >> number) {
        sum += number;
        total++;
    }

    if (total > 0) {
        double average = sum / total;
        std::cout << std::fixed << std::setprecision(2) << average << std::endl;
    } else {
        std::cout << std::endl;
    }

    return 0;
}