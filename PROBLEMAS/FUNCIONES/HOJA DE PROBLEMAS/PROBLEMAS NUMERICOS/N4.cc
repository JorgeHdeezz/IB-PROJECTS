#include <iostream>

bool bisiesto(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    int year; 
    std::cout << "Introduce un año: ";
    std::cin >> year; 

    if (bisiesto(year)) {
        std::cout << "El año " << year << " es bisiesto" << std::endl;
    } else {
        std::cout << "El año " << year << " no es bisiesto" << std::endl;
    }
    return 0;
}