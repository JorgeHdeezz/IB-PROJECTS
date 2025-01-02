#include <iostream>

int main() {
    int num; 
    std::cout << "Dime un numero: "; 
    std::cin >> num; 
    std::cout << "La suma de los digitos de " << num << " es: ";
    std::cout << (num*(num + 1))/2 << std::endl; 
    return 0; 
}


// int main() {    
//     int num; 
//     std::cout << "Dime un numero: "; 
//     std::cin >> num;
//     int total; 
//     while (num > 0) {
//         total = total + num; 
//         num -= 1; 
//     }
//     std::cout <<  "La suma de los numeros es: " << total; 
// }