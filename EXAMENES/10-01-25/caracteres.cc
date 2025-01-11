#include <iostream>
#include <string>

int CaracteresIguales(std::string str1, std::string str2) {
  int contador = 0; 
  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] == str2[i]) {
      contador++;
    }
  }
  return contador;
}

int main() {
  std::string str1, str2;
  std::cin >> str1 >> str2;
  std::cout << CaracteresIguales(str1, str2) << std::endl;
  return 0;
}