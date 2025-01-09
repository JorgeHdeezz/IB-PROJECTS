#include <iostream>

int main() {
   int n;
   std::cin >> n;
   double h = 0.0;
   for (double i = 1; i <= n; i++) {
        h += 1.0 / i;
   }
   if (h < 0.0) {
        h *= -1;
    }
    std::cout.setf(ios::fixed);
    std::cout.precision(4);
    std::cout << h << endl;
}








