/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file absolute-value.cc
  * @author alu0101548036@ull.edu.es
  * @date Nov 21 2022
  * @brief The program writes a function that returns the absolute value of an integer n. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96275
  */

#include <iostream>
using namespace std;

int absolute(int n) {
    return (n < 0)? -n : n;
}

int main () {
	int n;
    cin >> n;
    cout << absolute(n) << endl;
}
