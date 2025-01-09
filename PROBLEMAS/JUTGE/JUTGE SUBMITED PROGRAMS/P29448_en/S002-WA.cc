#include <iostream>

bool leap_year(int year) {
    if (year % 4 != 0){
        return false;
    } else {
        return true;
    }
}

bool valid_Date(int day, int month, int year) {
    if (year < 1) {
        return false;
    } 
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1) {
        return false;
    }
    if (month == 2) {
        if (leap_year(year)) {
            return day <= 29;
        } else {
            return day <= 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return day <= 30;
    } else {
        return day <= 31;
    }
    }

int main() {
    int day, month, year;
    while (std::cin >> day) {
        std::cin >> month >> year;
         if (valid_Date(day, month, year)) {
        std::cout << "Correct Date" << std::endl;
        } else {
        std::cout << "Incorrect Date" << std::endl;
        }   
    }

   

    return 0;
}