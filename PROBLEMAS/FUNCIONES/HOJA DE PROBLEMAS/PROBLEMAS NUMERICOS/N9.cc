#include <iostream>
#include <algorithm>

std::pair<float, float> Intersección(float a1, float b1, float a2, float b2) {
    if (a1 > a2) std::swap(a1, a2);
    if (b1 > b2) std::swap(b1, b2);

    float inicio = std::max(a1, a2); 
    float fin = std::min(b1, b2);

    if (inicio <= fin) {
        return {inicio, fin};
    } else {
        return {0, 0};
    }
}

int main() {
    float a1, b1, a2, b2;
    std::cout << "Ingrese los valores de a1 y a2: "; 
    std::cin >> a1 >> a2; 
    std::cout << "Ingrese los valores de b1 y b2: ";
    std::cin >> b1 >> b2; 

    auto intersection = Intersección(a1, b1, a2, b2);

    if (intersection.first == 0 && intersection.second == 0) {
        std::cout << "No hay intersección" << std::endl;
    } else {
        std::cout << "Intersección: [" << intersection.first << ", " << intersection.second << "]" << std::endl;
    }
    return 0;
}