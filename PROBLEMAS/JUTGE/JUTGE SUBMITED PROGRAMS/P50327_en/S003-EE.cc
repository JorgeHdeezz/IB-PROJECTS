#include <iostream>

// Function to count the number of trailing zeros
int countTrailingZeros(int num) {
    int count = 0;
    while (num % 10 == 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to reverse and print the number with trailing zeros
void printReversedNumberWithZeros(int num) {
    int reversed = 0;
    int originalNum = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    int zeros = countTrailingZeros(originalNum);

    while (zeros > 0) {
        std::cout << 0;
        zeros--;
    }

    std::cout << reversed << std::endl;
}

int main() {
    int num;
    std::cin >> num;

    printReversedNumberWithZeros(num);

    return 0;
}