#include <iostream>

int main() {
    int num;
    std::cin >> num;
    
    while (num > 15) {
        int temp = num % 16;
        num /= 16;
    
        if (temp >= 10) {
            std::cout << (char)(temp * 'A' - 10);
        } else {
            std::cout << temp;
        } 
     }

        if (num >= 10) {
            std::cout << (char)(num + 'A' - 10) << std::endl;
        } else {
            std::cout << num << std::endl;
        }

    }
