#include <iostream>
#include <vector>
#include <string>

class Vehiculo {
  private: 
    std::string marca_; 
    std::string matricula_; 
    int kilometraje_; 

  public: 
    Vehiculo() : marca_(""), matricula_(""), kilometraje_(0) {} 

    Vehiculo(std::string marca_, std::string matricula_, int kilometraje_) : marca_(marca_), matricula_(matricula_), kilometraje_(kilometraje_) {}
  
    std::string marca() const { return marca_; }
    std::string matricula() const { return matricula_; }
    int kilometraje() const { return kilometraje_; }

    void mostrar() const {
      std::cout << "Marca: " << marca_ << ", Matrícula: " << matricula_ 
      << ", Kilometraje: " << kilometraje_ << " km" << std::endl;
    }
};

class GestorVehiculo {
  private: 
    std::vector<Vehiculo> vehiculos_;

  public: 
    void agregarVehiculo(std::string marca, std::string matricula, int kilometraje) {
      Vehiculo nuevoVehiculo(marca, matricula, kilometraje);
      vehiculos_.push_back(nuevoVehiculo);
    }

    void mostrarVehiculos() {
      if (vehiculos_.empty()) {
        std::cout << "No hay vehículos registrados." << std::endl;
      } else {
        for (auto vehiculo : vehiculos_) {
          vehiculo.mostrar();
        }
      }
    }
};

int main() {
  GestorVehiculo gestor; 

  int opcion; 
  do {
    std::cout << "\nGestor de Vehículos" << std::endl; 
    std::cout << "1. Agregar Vehículo" << std::endl; 
    std::cout << "2. Mostrar Vehículos" << std::endl; 
    std::cout << "3. Salir" << std::endl; 
    std::cout << "Opción: "; 
    std::cin >> opcion; 

    switch (opcion) {
      case 1: {
        std::string marca, matricula; 
        int kilometraje; 

        std::cout << "Introduce la marca: "; 
        std::cin >> marca; 
        std::cout << "Introduce la matrícula: "; 
        std::cin >> matricula; 
        std::cout << "Introduce el kilometraje: "; 
        std::cin >> kilometraje; 

        gestor.agregarVehiculo(marca, matricula, kilometraje);
        break; 
      }
      case 2: {
        gestor.mostrarVehiculos();
        break; 
      }
      case 3: 
        std::cout << "Saliendo..." << std::endl; 
        break; 
      default: 
        std::cout << "Opción no válida." << std::endl; 
    }
  } while (opcion != 3);

  return 0;

}