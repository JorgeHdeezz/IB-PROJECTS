#include <iostream>
#include <cmath>
int main() {
    int numero, fibo1, fibo2, i; 
    std::cout << "Introduce el numero de términos deseado: "; 
    std::cin >> numero; 


    while(numero <= 1); 
        std::cout << "Los " << numero << "primeros términos de la serie Fibonacci son: " << std::endl; 
        std::cout << std::endl;
        std::cout << "0, 1, ";
        fibo1 = 1; 
        fibo2 = 2; 
        std::cout << fibo1 << ", "; 
        for(i = 2; i <= numero; i++) {
            if (i == numero) {
                std::cout << fibo2 << std::endl;
            } else {
                std::cout << fibo2 << ", ";
                fibo2 = fibo1 + fibo2; 
                fibo1 = fibo2 - fibo1;   
            }
        } 

    return 0; 
}






// {
//     int numero,fibo1,fibo2,i;
//          cout << "Introduce numero mayor que 1: ";
//          cin >> numero;
//    }while(numero<=1);
//    cout << endl;
//     cout << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
//    fibo1=1;
//    fibo2=1;
//    cout << fibo1 << " ";
//    for(i=2;i<=numero;i++)
//    {
//        cout << fibo2 << " ";
//        fibo2 = fibo1 + fibo2;
//        fibo1 = fibo2 - fibo1;
//    }
//    }


