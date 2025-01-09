#include <iostream>
#include <vector>

bool esGuay(int numero) {
    int sumaImpares = 0; 
    int posicion = 1; 

    while (numero > 0) {
      int digito = numero % 10; 
      if (posicion % 2 != 0) {
        sumaImpares += digito; 
      }
    numero /= 10;
    posicion++;
    }
  return sumaImpares % 2 == 0;
}

int main() {
  int numero; 
  std::cin >> numero; 

  if (esGuay(numero)) {
    std::cout << "N es guay" << std::endl;
  } else {
    std::cout << "N NO es guay" << std::endl;
  }
  return 0; 
}



