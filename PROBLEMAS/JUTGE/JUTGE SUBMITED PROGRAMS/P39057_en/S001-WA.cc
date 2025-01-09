/**
  2   * Universidad de La Laguna
  3   * Escuela Superior de Ingeniería y Tecnología
  4   * Grado en Ingeniería Informática
  5   * Informática Básica 2022-2023
  6   *  
  7   * @file P39057.cc
  8   * @author: alu0101548036@ull.edu.es
  9   * @brief Input begins with a number n, followed by n descriptions. If of a rectangle, we have the word “rectangle” followed by two strictly positive real numbers:
      * its length and its width. If of a circle, we have the word “circle” followed by a strictly positive real number: its radius. And the output for each description,
      * print its area with 6 digits after the decimal point.
 11   * @bug There are no known bugs
 12   * @see https://jutge.org/problems/P39057
 13   */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

string des;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> des;
        if (des == "rectangle") {
            int x, y;
			cin >> x >> y;
            cout << fixed << setprecision(6) << x*y << endl;
        } else {
			int r;
            cin >> r;
            cout << fixed << setprecision(6) << r*r*(3.1416) << endl;
        }
    }
}
