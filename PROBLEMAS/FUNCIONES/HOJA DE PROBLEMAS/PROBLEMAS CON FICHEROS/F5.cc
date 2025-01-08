#include <iostream>
#include <fstream>
#include <string>

void EliminarLineasBlanco(const std::string& archivo, const std::string& salida) {
    std::ifstream archivoEntrada(archivo);
    std::ofstream archivoSalida(salida);
    std::string linea;
    while (std::getline(archivoEntrada, linea)) {
        if (linea.find_first_not_of(" \t") != std::string::npos)
        archivoSalida << linea << std::endl;
    }
    archivoEntrada.close();
}

int main() {
    std::string archivo("QUIJOTE.txt");
    std::string salida("QUIJOTE2.txt");
    EliminarLineasBlanco(archivo, salida);
    return 0;
}