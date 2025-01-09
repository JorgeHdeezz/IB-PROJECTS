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
        if (minutes > 0) {
            seconds -= minutes * 60;
        } else { 
            minutes = 0; 
        }
        std::cout << hours << " " << minutes << " " << seconds << std::endl;
        
        return 0;

}

//     int horas; 
//     int minutos;
//     int segundos; 

//     horas = seconds / 3600; 

//     if (horas > 0) {
//        int sinHoras = seconds - (horas * 3600);
//        int minutos = sinHoras / 60;
//     } else {
//         int minutos = seconds / 60;
//     }

//     if (minutos > 0) {
//         int sinMinutos = seconds  - (minutos * 60);
//         int segundos = sinMinutos;
//     } else {
//         int segundos = seconds / 60;
//     }

//     std::cout << horas << " " << minutos << " " << segundos << std::endl; 
    
//     return 0; 
// }