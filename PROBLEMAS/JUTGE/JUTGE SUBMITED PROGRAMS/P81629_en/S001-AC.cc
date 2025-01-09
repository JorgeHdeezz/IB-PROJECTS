#include <iostream>

int main () {
    int eur, cent;
    std::cin >> eur >> cent;
    int monedes[] = {1, 2, 5, 10, 20, 50};
    int billets[] = {5, 10, 20, 50, 100, 200, 500};
    int cont = 7;
    int cont2 = 0;
    while (cont--) {
        std::cout << "Banknotes of " << billets[cont] << " euros: " << eur/billets[cont] << std::endl;
        if (eur >= billets[cont]) eur %= billets[cont];
    }
    std::cout << "Coins of " << 2 << " euros: " << eur/2 << std::endl;
    if (eur >= 2) eur %= 2;
    std::cout << "Coins of " << 1 << " euro: " << eur << std::endl;
    cont = 6;
    while (cont--) {
        if (cont != 0) std::cout << "Coins of " << monedes[cont] << " cents: " << cent / monedes[cont] << std::endl;
        else std::cout << "Coins of " << monedes[cont] << " cent: " << cent / monedes[cont] << std::endl;
        if (cent >= monedes[cont]) cent %= monedes[cont];
    }
}