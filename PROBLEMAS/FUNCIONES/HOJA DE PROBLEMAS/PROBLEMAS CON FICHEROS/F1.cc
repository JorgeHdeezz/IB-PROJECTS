#include <iostream>
#include <fstream>
#include <string>

void ImprimirCodigoFuente(const std::string& nombreArchivo) {
    std::ifstream archivoFuente(nombreArchivo);
    if (!archivoFuente.is_open()) {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }

    std::string linea; 
    while (std::getline(archivoFuente, linea)) {
        std::cout << linea << std::endl; 
    }
    archivoFuente.close();
}

int main() {
    ImprimirCodigoFuente("F1.cc");
    return 0;
}