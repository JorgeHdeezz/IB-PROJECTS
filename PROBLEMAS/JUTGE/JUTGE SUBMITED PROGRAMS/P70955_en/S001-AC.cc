/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author alu0101548036
 * @date 8 Oct 2023
 * @brief How many seconds are they?
 * 
 */

#include <iostream>

int main() {
    
    int years, days, hours, minutes, seconds;
    std::cin >> years >> days >> hours >> minutes >> seconds;
    
    int Total_Seconds;
    Total_Seconds = (years * 31536000) + (days * 86400) + (hours * 3600) + (minutes * 60) + seconds;
    std::cout << Total_Seconds << std::endl;
    return 0;
}