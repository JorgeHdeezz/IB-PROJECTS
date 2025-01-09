#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

int main () {
    double x, n, res = 0;
    int i = 0;
    double v[100];
    
    std::cin >> x;
    while (std::cin >> n) {
        v[i] = n;
        i++;
    } 
    for (int j = 0; i < i; j++) {
        res += v[j] * pow(x, i - 1 - j);
    } 
    std::cout << std::fixed << std::setprecision(4) << res << std::endl;
    return 0;
}