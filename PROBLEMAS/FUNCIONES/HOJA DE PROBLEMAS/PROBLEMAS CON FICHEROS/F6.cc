#include <iostream>
#include <fstream>
#include <string>

void AgregarNumeroLineas(const std::string& archivo, const std::string& salida) {
    std::ifstream archivoEntrada(archivo);
    std::ofstream archivoSalida(salida);
    std::string linea;
    int contador = 1;
    while (std::getline(archivoEntrada, linea)) {
        archivoSalida << contador << ": " << linea << std::endl;
        contador++;
    }
    archivoEntrada.close();
}

int main() {
    std::string archivo("QUIJOTE.txt");
    std::string salida("QUIJOTE2.txt");
    AgregarNumeroLineas(archivo, salida);
    return 0;
}