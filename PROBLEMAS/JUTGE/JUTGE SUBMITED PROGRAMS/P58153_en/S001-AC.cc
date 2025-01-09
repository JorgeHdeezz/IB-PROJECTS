/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *  
  * @file P58153.cc
  * @author: alu0101548036@ull.edu.es
  * @brief Input consists of several pairs of natural numbers n and m such that n ≥ m and output,
  * for every pair, print Hn − Hm with 10 digits after the decimal point.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */


#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int n,m;
	while (cin >> n) {
        cin >> m;
        double h = 0.0;
        for (double i = m+1; i <= n; i++) {
            h += 1.0/i;
}
        if (h < 0.0 ) h *= -1;
        cout << fixed << setprecision(10) << h << endl;
    }


}
