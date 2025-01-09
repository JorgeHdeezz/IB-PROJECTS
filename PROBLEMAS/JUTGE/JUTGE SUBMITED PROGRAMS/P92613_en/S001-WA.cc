/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author alu0101548036@ull.edu.es
 * @date
 * @brief (como funciona el programa)
 * @bug There are no known bugs
 */

#include <iostream>
                  
	int main() {	

	float numero  = 0;
		int inferior,superior, entero = 0;
	std::cin>>numero;
	
	superior = numero + 1;
	inferior = numero;
	
	if(numero >= 0.5){
		entero = numero + 0.5;
	}
	else if(numero < 0.5){
		entero = numero - 0.5;
	}
	else if(numero = 0.0){
		numero = numero;
	}
	
	
	
	std::cout<<inferior<<" "<<superior<<" "<<entero<<std::endl;
	
	return 0;
}
	
	 
