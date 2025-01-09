/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file iterative-double-factorial.cc
  * @author alu0101548036@ull.edu.es
  * @date Nov 21 2022
  * @brief The program writes an iterative function that returns the double factorial n!! for a 
  * natural n. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17913
  */

#include <iostream>
using namespace std;

int main()   {

	int factorial_doble(int n) { 
    int res = 1;
    for (int i = n; i > 1; i -= 2) res *= i;
    return res;
}

	int main () {
	int n;
    while (cin >> n) cout << factorial_doble(n) << endl;
}

return 0;
}
