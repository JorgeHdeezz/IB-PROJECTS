#include "funciones.h"

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
                std::cin.ignore(); 
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
