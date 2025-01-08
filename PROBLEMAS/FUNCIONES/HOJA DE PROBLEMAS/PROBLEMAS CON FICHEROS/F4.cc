#include <iostream>
#include <fstream>
#include <string>

void EliminarPalabras(const std::string&archivo, const std::string&palabra, std::string&salida) {
    std::ifstream archivoEntrada(archivo);
    std::ofstream archivoSalida(salida);
    std::string linea;
    while (std::getline(archivoEntrada, linea)) {
        std::string::size_type pos = 0;
        while ((pos = linea.find(palabra, pos)) != std::string::npos) {
            linea.erase(pos, palabra.length());
        }
        archivoSalida << linea << std::endl;
    }
    archivoEntrada.close();
}

int main() {
    std::string archivo("QUIJOTE.txt");
    std::string palabra("Sancho");
    std::string salida("QUIJOTE2.txt");
    EliminarPalabras(archivo, palabra, salida);
    return 0; 
}