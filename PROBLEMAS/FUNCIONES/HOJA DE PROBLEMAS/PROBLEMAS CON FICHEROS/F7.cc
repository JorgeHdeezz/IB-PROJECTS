#include <iostream>
#include <fstream>
#include <string>

// Estructura para almacenar una palabra y su frecuencia
struct PalabraFrecuencia {
    std::string palabra;
    int frecuencia;
};

// Función para contar las palabras y sus frecuencias
void ContarPalabras(const std::string& archivo, PalabraFrecuencia palabras[], int& numPalabras) {
    std::ifstream archivoEntrada(archivo);
    if (!archivoEntrada.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return;
    }

    std::string palabra;
    while (archivoEntrada >> palabra) {
        bool encontrada = false;
        for (int i = 0; i < numPalabras; ++i) {
            if (palabras[i].palabra == palabra) {
                ++palabras[i].frecuencia;
                encontrada = true;
                break;
            }
        }
        if (!encontrada && numPalabras < 1000) { // Limitar a 1000 palabras diferentes
            palabras[numPalabras].palabra = palabra;
            palabras[numPalabras].frecuencia = 1;
            ++numPalabras;
        }
    }

    archivoEntrada.close();
}

// Función para ordenar las palabras por frecuencia en orden descendente
void OrdenarPalabrasPorFrecuencia(PalabraFrecuencia palabras[], int numPalabras) {
    for (int i = 0; i < numPalabras - 1; ++i) {
        for (int j = i + 1; j < numPalabras; ++j) {
            if (palabras[j].frecuencia > palabras[i].frecuencia) {
                PalabraFrecuencia temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }
}

// Función para imprimir las 10 palabras más frecuentes
void ImprimirPalabrasFrecuentes(const std::string& archivo) {
    PalabraFrecuencia palabras[1000]; // Limitar a 1000 palabras diferentes
    int numPalabras = 0;
    ContarPalabras(archivo, palabras, numPalabras);
    OrdenarPalabrasPorFrecuencia(palabras, numPalabras);

    std::cout << "Las 10 palabras más frecuentes son:" << std::endl;
    for (int i = 0; i < 10 && i < numPalabras; ++i) {
        std::cout << palabras[i].palabra << ": " << palabras[i].frecuencia << std::endl;
    }
}

int main() {
    std::string archivoEntrada;
    std::cout << "Introduce el nombre del archivo de entrada: ";
    std::cin >> archivoEntrada;

    ImprimirPalabrasFrecuentes(archivoEntrada);

    return 0;
}