#include <iostream>
#include <fstream>
#include <string>

void CompararArchivos(const std::string& archivo1, const std::string& archivo2) {
    std::ifstream file1(archivo1);
    std::ifstream file2(archivo2);

    if (!file1.is_open() || !file2.is_open()) {
        std::cerr << "Error al abrir los archivos." << std::endl;
        return;
    }

    std::string line1, line2;
    int numLinea = 1;
    while (std::getline(file1, line1) && std::getline(file2, line2)) {
        if (line1 != line2) {
            std::cout << "Diferencia en la línea " << numLinea << "." << std::endl;
            return;
        }
        ++numLinea;
    }

    if (std::getline(file1, line1) || std::getline(file2, line2)) {
        std::cout << "Los archivos son diferentes. " << std::endl;
    } else {
        std::cout << "Los archivos son iguales." << std::endl;
    }

    file1.close();
    file2.close();
}

int main() {
    std::string file1("QUIJOTE.txt"); 
    std::string file2("QUIJOTE2.txt"); 
    CompararArchivos(file1, file2);
    return 0; 
}