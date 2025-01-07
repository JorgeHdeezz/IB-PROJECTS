#include "funciones.h"

// Implementación de la clase Vehiculo
Vehiculo::Vehiculo(const std::string& nombre, const std::string& marca, const std::string& matricula, int kilometraje)
    : nombre(nombre), marca(marca), matricula(matricula), kilometraje(kilometraje) {}

std::string Vehiculo::getNombre() const { return nombre; }
std::string Vehiculo::getMarca() const { return marca; }
std::string Vehiculo::getMatricula() const { return matricula; }
int Vehiculo::getKilometraje() const { return kilometraje; }

void Vehiculo::mostrar() const {
    std::cout << "Nombre: " << nombre << ", Marca: " << marca << ", Matrícula: " << matricula 
              << ", Kilometraje: " << kilometraje << " km" << std::endl;
}

// Implementación de la clase GestorVehiculos
void GestorVehiculos::agregarVehiculo(const std::string& nombre, const std::string& marca, const std::string& matricula, int kilometraje) {
    Vehiculo nuevoVehiculo(nombre, marca, matricula, kilometraje);
    vehiculos.push_back(nuevoVehiculo);
}

void GestorVehiculos::mostrarVehiculos() const {
    if (vehiculos.empty()) {
        std::cout << "No hay vehículos registrados." << std::endl; 
    } else {
        for (const auto& vehiculo : vehiculos) {
            vehiculo.mostrar();
        }
    }
}
