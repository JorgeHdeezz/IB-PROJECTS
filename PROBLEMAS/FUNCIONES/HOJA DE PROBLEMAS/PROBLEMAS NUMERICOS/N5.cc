#include <iostream>
#include <vector>
#include <iomanip>

// Función para convertir de Fahrenheit a Celsius
float FarenheittoCelsius(float f) {
    float Celsius = (f - 32) * 5 / 9;
    return Celsius;
}

// Función para convertir de Fahrenheit a Kelvin (absoluto)
float FarenheittoAbsolute(float f) {
    float Absolute = (f - 32) * 5 / 9 + 273.15;
    return Absolute;
}

// Función para generar una tabla de temperaturas
std::vector<std::vector<float>> TablaTemperaturas(float minTemp, float maxTemp, float difTemp) {
    std::vector<std::vector<float>> Temperaturas;
    for (float i = minTemp; i <= maxTemp; i += difTemp) {
        std::vector<float> fila;
        fila.push_back(i);
        fila.push_back(FarenheittoCelsius(i));
        fila.push_back(FarenheittoAbsolute(i));
        Temperaturas.push_back(fila);
    }
    return Temperaturas;
}

int main() {
    float minTemp, maxTemp, difTemp;
    std::cin >> minTemp >> maxTemp >> difTemp;

    std::vector<std::vector<float>> Temperaturas = TablaTemperaturas(minTemp, maxTemp, difTemp);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit" << std::setw(2) << "|" << std::setw(9) << "Celsius" << " | " << std::setw(8) << "Absolute" << std::endl;
    // std::cout << "Fahrenheit | Celsius | Absolute" << std::endl;
    // std::cout << "-------------------------------" << std::endl;
    for (const auto& fila : Temperaturas) {
        std::cout << std::setw(10) << fila[0] << " | " << std::setw(8) << fila[1] << " | " << std::setw(8) << fila[2] << std::endl;
    }

    return 0;
}