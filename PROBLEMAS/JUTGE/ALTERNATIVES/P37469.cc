#include <iostream>

int main() {

    long long seconds; 
    std::cin >> seconds;

    int hours, minutes; 
    hours = seconds / 3600; 

    if (hours  > 0) {
        seconds -= hours * 3600;
        } else {
            hours = 0;
        }

        minutes =  seconds / 60;
        if (minutes > 0) {
            seconds -= minutes * 60;
        } else { 
            minutes = 0; 
        }
        std::cout << hours << " " << minutes << " " << seconds << std::endl;

        return 0;

}

