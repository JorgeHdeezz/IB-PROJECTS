#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

// Función para generar las primeras n ternas pitagóricas
vector<tuple<int, int, int>> generarTernasPitagoricas(int n) {
    vector<tuple<int, int, int>> ternas;

    for (int k = 1; k <= n; ++k) {
        // Si a es impar (a = 2k + 1)
        int a_impar = 2 * k + 1;
        int b_impar = 2 * k * (k + 1);
        int c_impar = b_impar + 1;
        ternas.push_back(make_tuple(a_impar, b_impar, c_impar));

        // Si a es par (a = 2k)
        int a_par = 2 * k;
        int b_par = k * k - 1;
        int c_par = k * k + 1;
        ternas.push_back(make_tuple(a_par, b_par, c_par));
    }

    return ternas;
}

int main() {
    int n;

    // Solicitar al usuario el número de ternas a generar
    cout << "Ingrese el número de ternas pitagóricas a generar: ";
    cin >> n;

    // Generar las ternas pitagóricas
    vector<tuple<int, int, int>> ternas = generarTernasPitagoricas(n);

    // Imprimir las ternas
    cout << "Ternas pitagóricas generadas:\n";
    for (const auto& terna : ternas) {
        cout << "(" << get<0>(terna) << ", " << get<1>(terna) << ", " << get<2>(terna) << ")\n";
    }

    return 0;
}
