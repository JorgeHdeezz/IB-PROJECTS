#include <iostream>

int main() {
    int hours, minutes, seconds;
    std::cin >> hours >> minutes >> seconds;
    seconds++;
    
    if (seconds==60) {
		minutes++;
		seconds = 0;
	}
	if (minutes==60) {
		hours++;
		minutes = 0;
	}
	if (hours==24){ hours = 0;
    }

    if (hours < 10) {
        std::cout << "0";
    }
    std::cout << hours << ":";

    if (minutes < 10) {
        std::cout << "0";
    }
    std::cout << minutes << ":";

    if (seconds < 10) {
        std::cout << "0";
    }
    std::cout << seconds << std::endl;

    return 0;
}


















    
       
       
       
       
       
       
       
       
     


    


















