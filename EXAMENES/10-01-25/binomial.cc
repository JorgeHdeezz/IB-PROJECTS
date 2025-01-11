#include <iostream>
#include <fstream>

int Binomial(int n, int k) {
  if (k < n) {
    return 0; 
  } else if (k <= 0) {
    return 1; 
  } else {
    int n_fact = 1;
    int k_fact = 1;
    for (int i = 1; i <= n; i++) {
      n_fact *= i;
    }
    for (int i = 1; i <= k; i++) {
      k_fact *= i;
    }
    int n_k_fact = 1;
    for (int i = 1; i <= n - k; i++) {
      n_k_fact *= i;
    }
    return n_fact / (k_fact * n_k_fact);
  }
}

int main() {
  std::ifstream infile("file.txt"); 
  if (!file) {
    std::cerr << "Error: no se pudo abrir el archivo." << std::endl;
    return 1;
  }

  int n, k;
  file >> n >> k;
  file.close();
  
  std::cout << Binomial(n, k) << std::endl;
  return 0;
}