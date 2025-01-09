/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file iterative-number-of-digits.cc
  * @author alu0101548036@ull.edu.es
  * @date Nov 21 2022
  * @brief The program reads the number of digits of the input value 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P55722
  */

#include <iostream>
using namespace std;
int nombre_digits(int n) {
    int c = 0;
    while (n >= 10) {
        n /= 10;
        c++;
    }
    return c+1;
}

int main () {
	int n;
    while (cin >> n) cout << nombre_digits(n) << endl;
return 0;
}
