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

int main () {
	int n;
    std::cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) res += i*i;
    std::cout << res << std::endl;
return 0;
}


