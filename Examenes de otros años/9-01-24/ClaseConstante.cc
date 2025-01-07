#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre; 
    int edad; 

public: 
    //Contructor
    Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

    //Método constante
    std::string ObtenerNombre() const {
        return nombre; 
    }

    //Método no constante
    int CumplirAnios() {
        return edad++;
    }

    //Método constante
    int ObtenerEdad() const {
        return edad; 
    }
};

int main() {
    Persona persona("Juan", 30);

    std::cout << "Nombre: " << persona.ObtenerNombre() << std::endl; 
    std::cout << "Edad: " << persona.ObtenerEdad() << std::endl; 

    persona.CumplirAnios(); 
    std::cout << "Edad después de cumplir años: " << persona.ObtenerEdad() << std::endl;
    return 0; 
}

// ¿Puede un constructor ser constante?
// No, un constructor no puede ser constante en C++.

// Razón:
// El propósito del constructor es inicializar los atributos del objeto y establecer su estado inicial. Durante esta inicialización, es necesario modificar los atributos de la clase, lo cual entra en conflicto con la idea de que un método constante no puede modificar el estado del objeto.
// Además, los métodos constantes se aplican a un objeto ya construido, y el constructor es llamado antes de que el objeto exista por completo.