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
    // Constructor 
    Vehiculo(const std::string& nombre, const std::string& marca, const std::string& matricula, int kilometraje) 
    : nombre(nombre), marca(marca), matricula(matricula), kilometraje(kilometraje) {}

    // Métodos para obtener los datos del vehículo
    std::string getNombre() const { return nombre; }
    std::string getMarca() const { return marca; }
    std::string getMatricula() const { return matricula; }
    int getKilometraje() const { return kilometraje; }

    // Método para mostrar los datos del vehículo
    void mostrar() const {
        std::cout << "Nombre: " << nombre << ", Marca: " << marca << ", Matrícula: " << matricula << ", Kilometraje: " << 
        kilometraje << " km" << std::endl;
    }
};

class GestorVehiculos {
private: 
    std::vector<Vehiculo> vehiculos; 

public:
    // Método para agregar un vehiculo
    void agregarVehiculo(const std::string& nombre, const std::string& marca, const std::string& matricula, int kilometraje) {
        Vehiculo nuevoVehiculo(nombre, marca, matricula, kilometraje);
        vehiculos.push_back(nuevoVehiculo); // Insertar el vehículo en el vector
    }

    // Método para mostrar todos los vehiculos
    void mostrarVehiculos() const {
        if (vehiculos.empty()) {
            std::cout << "No hay vehículos registrados." << std::endl; 
        } else {
            for (const auto& vehiculo : vehiculos) {
                vehiculo.mostrar();
            }
        }
    }
};

int main() {
    GestorVehiculos gestor;

    int opcion; 
    do {
        std::cout << "\nGestor de Vehículos" << std::endl; 
        std::cout << "1. Agregar Vehículo" << std::endl;
        std::cout << "2. Mostrar Vehículos" << std::endl;
        std::cout << "3. Salir" << std::endl; 
        std::cout << "Seleccione una opción: "; 
        std::cin >> opcion; 

        switch (opcion) {
            case 1: {
                std::string nombre;
                std::string marca;
                std::string matricula; 
                int kilometraje; 

                std::cout << "Ingrese el nombre del vehículo: "; 
                std::cin.ignore(); // Limpiar el buffer
                std::getline(std::cin, nombre); 
                std::cout << "Ingrese la marca del vehículo: ";
                std::getline(std::cin, marca); 
                std::cout << "Ingrese la matrícula del vehículo: "; 
                std::getline(std::cin, matricula);
                std::cout << "Ingrese el kilometraje del vehículo: ";
                std::cin >> kilometraje; 

                gestor.agregarVehiculo(nombre, marca, matricula, kilometraje); 
                std::cout << "Vehículo agregado correctamente." << std::endl; 
                break; 
            }
            case 2: {
                gestor.mostrarVehiculos(); 
                break; 
            }
            case 3: {
                std::cout << "Saliendo del programa..." << std::endl; 
                break; 
            }
            default:
                std::cout << "Opción no válida. Intente nuevamente." << std::endl;
        }
    } while (opcion != 3);

    return 0; 
}