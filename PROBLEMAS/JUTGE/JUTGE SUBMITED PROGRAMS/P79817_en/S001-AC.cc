 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 *  @author alu0101548036@ull.edu.es
 * @date
 * @brief (como funciona el programa)
 * @bug There are no known bugs
 */


#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int a,b;
    while (cin >> a) {
        int r = 1;
        cin >> b;
        for (int i = 0; i < b; i++) r*=a;
        cout << r << endl;
    }
}
