#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Declaración
    vector<int> numeros;

    // Agregar elementos
    numeros.push_back(10); // Agrega 10 al final
    numeros.push_back(20); // Agrega 20 al final
    numeros.push_back(30); // Agrega 30 al final
    numeros.pop_back();
    // Acceso a elementos
  
     cout << numeros.at(1); // Acceso seguro

    // // Eliminar el último elemento
    // numeros.pop_back();

    // // Tamaño del vector
    // cout << numeros.size(); // Imprime el tamaño del vector

    return 0;
}
