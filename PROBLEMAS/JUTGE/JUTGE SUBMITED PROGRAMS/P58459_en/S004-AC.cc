#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool is_valid_date(int d, int m, int y) {
    if (y < 1800 || y > 9999 || m < 1 || m > 12 || d < 1) {
        return false; // Year, month, or day out of range
    }

    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if (m == 2 && is_leap_year(y)) {
        return (d <= 29);
    } else {
        return (d <= days_in_month[m]);
    }
}


int main() {
    // Example usage
    int day, month, year;
    std::cin >> day >> month >> year;

    if (is_valid_date(day, month, year)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}