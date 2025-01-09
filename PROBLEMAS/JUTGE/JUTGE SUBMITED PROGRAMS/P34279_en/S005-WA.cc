#include <iostream>

int main() {
    int hours, minutes, seconds;
    std::cin >> hours >> minutes >> seconds;
    seconds++;
    if (seconds >= 60) {
        seconds = 00;
        minutes++;
        if(minutes >= 60) {
            minutes = 00;
            hours = (hours + 1) % 24;
        }
    }
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;     
    return 0;
}

    


















