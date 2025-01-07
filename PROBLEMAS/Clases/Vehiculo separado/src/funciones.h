#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <vector>
#include <string>

class Vehiculo {
private:
    std::string nombre; 
    std::string marca; 
    std::string matricula; 
    int kilometraje; 

public: 
    Vehiculo(const std::string& nombre, const std::string& marca, const std::string& matricula, int kilometraje);
    std::string getNombre() const;
    std::string getMarca() const;
    std::string getMatricula() const;
    int getKilometraje() const;
    void mostrar() const;
};

class GestorVehiculos {
private: 
    std::vector<Vehiculo> vehiculos; 

public:
    void agregarVehiculo(const std::string& nombre, const std::string& marca, const std::string& matricula, int kilometraje);
    void mostrarVehiculos() const;
};

#endif
