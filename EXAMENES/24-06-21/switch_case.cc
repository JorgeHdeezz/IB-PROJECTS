#include <iostream>
#include <string>

std::string CambiarLetras(std::string cadena) {
  char letra; 
  for (int i = 0; i < cadena.length(); i++) {
    letra = cadena[i];
    if (std::islower(letra)) {
      cadena[i] = std::toupper(letra); 
    } else if (std::isupper(letra)) {
      cadena[i] = std::tolower(letra); 
    }

  }
  return cadena; 
}

int main() {
  std::string input; 
  std::cout << "Introduce una cadena: "; 
  std::cin >> input; 
  std::cout << CambiarLetras(input) << std::endl; 
  return 0; 
}