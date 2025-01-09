/**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática
   * Informática Básica 2022-2023
   *  
   * @file P39057.cc
   * @author: alu0101548036@ull.edu.es
   * @brief Input begins with a number n, followed by n descriptions. If of a rectangle, we have the word “rectangle” followed by two strictly positive real numbers:
   * its length and its width. If of a circle, we have the word “circle” followed by a strictly positive real number: its radius. And the output for each description,
   * print its area with 6 digits after the decimal point.
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P39057
*/  

#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a = -1, b = -1, c = 0;
        while (a != 0) {
            cin >> a;
            if ( a > b and b != -1) c++;
            b = a;
        }
        cout << c << endl;
    }
}
Footer

