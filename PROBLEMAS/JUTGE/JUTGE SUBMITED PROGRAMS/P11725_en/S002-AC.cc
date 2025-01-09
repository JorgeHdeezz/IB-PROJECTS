 /**
  2   * Universidad de La Laguna
  3   * Escuela Superior de Ingeniería y Tecnología
  4   * Grado en Ingeniería Informática
  5   * Informática Básica 2022-2023
  6   *
  7   * @author alu0101548036@ull.edu.es
  8   * @date
  9   * @brief (como funciona el programa)
 10   * @bug There are no known bugs
 11   */
#include <iostream>
#include <vector>

using namespace std;

bool exists(int x, const vector<int>& v){
  bool encontrado = false;
  int i = 0;

  while (!encontrado and i < v.size()){
    if (x == v[i]) encontrado = true;
    i++;
  }
  return encontrado;
}

int main() {



}
