#include <iostream>
#include <fstream>
#include <string>

void ContarLineas (const std::string& archivo) {
    std::ifstream archivoEntrada(archivo);
    if (!archivoEntrada.is_open()) {
        std::cerr << "Error al abrir el archivo: " << archivo << std::endl;
        return;
    }
}
