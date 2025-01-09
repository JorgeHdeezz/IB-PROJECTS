#/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file
  * @author alu0101548036@ull.edu.es 
  * @date 
  * @brief 
  * @bug 
  * @see 
*/

#include <iostream>
#include <vector>
using namespace std;

bool exists(int x, const vector<int>& v) {
    for (auto i : v) if (i == x) return true;
    return false;
}

int main () {
	
}
