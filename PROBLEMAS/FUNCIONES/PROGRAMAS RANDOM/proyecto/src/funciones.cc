#include "funciones.h"

int FibonacciSum(int n) {
    if (n <= 1) { 
        return 0; 
    }
    int a = 0, b = 1, sum = 1;
    for (int i = 2 ; i <= n; i++) {
        int next = a + b; 
        sum += next;
        a = b;
        b = next;
    }
        return sum;
}