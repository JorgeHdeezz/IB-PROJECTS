#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Función para contar palabras, líneas y caracteres en un archivo
void ContarPalabrasLineasCaracteres(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return;
    }

    int numPalabras = 0;
    int numLineas = 0;
    int numCaracteres = 0;
    std::string linea;

    while (std::getline(archivo, linea)) {
        ++numLineas;
        numCaracteres += linea.length() + 1; // +1 para contar el carácter de nueva línea
        std::istringstream stream(linea);
        std::string palabra;
        while (stream >> palabra) {
            ++numPalabras;
        }
    }

    archivo.close();

    std::cout << "Número de líneas: " << numLineas << std::endl;
    std::cout << "Número de palabras: " << numPalabras << std::endl;
    std::cout << "Número de caracteres: " << numCaracteres << std::endl;
}

int main() {
    std::string nombreArchivo;
    std::cout << "Introduce el nombre del archivo: ";
    std::cin >> nombreArchivo;

    ContarPalabrasLineasCaracteres(nombreArchivo);

    return 0;
}