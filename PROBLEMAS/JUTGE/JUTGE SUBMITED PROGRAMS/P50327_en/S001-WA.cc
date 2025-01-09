#include <iostream>

int reverseNumber(int num) {
    int r = 0;
    while (num > 0) {
        r = r * 10 + num % 10;
        num /= 10;
    }
    return r;
}


int main() {
    int num;
    std::cin >> num;
    int reversedNum = reverseNumber(num);
    std::cout << reversedNum << std::endl;
    return 0;
}