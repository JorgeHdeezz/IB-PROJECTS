#include <iostream>

int main() {
    
    int seconds;
        std::cin >> seconds;
    
    int years, minutes;
    years = seconds/3600;
    
    int seconds_before_years;
    seconds_before_years = seconds % 3600;
    
    minutes = seconds_before_years/60;    
    int seconds_before_minutes = seconds_before_years % 60;

        std::cout << years << " " << minutes << " " << seconds_before_minutes << std::endl;
        
    return 0;
}