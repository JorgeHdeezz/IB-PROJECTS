#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double sum = 0.0;
    double number;
    int count = 0;

    cout << "Enter a sequence of strictly positive real numbers (terminate with a non-numeric character):" << endl;

    while (cin >> number) {
        if (number > 0) {
            sum += number;
            count++;
        }
    }

    if (count > 0) {
        double average = sum / count;
        cout << fixed << setprecision(2) << "Average: " << average << endl;
    } else {
        cout << "No strictly positive real numbers were entered." << endl;
    }

    return 0;
}