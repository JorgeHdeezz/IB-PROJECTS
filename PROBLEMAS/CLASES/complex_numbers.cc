#include <iostream>
#include <cmath>

class ComplexNumbers {
private:
    double real;
    double imaginary;

public:
    // Constructor
    ComplexNumbers(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    // Getters
    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }

    // Setters
    void setReal(double real) { this->real = real; }
    void setImaginary(double imaginary) { this->imaginary = imaginary; }

    ComplexNumbers operator+(const ComplexNumbers& other) const {
        return ComplexNumbers(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumbers operator-(const ComplexNumbers& other) const {
        return ComplexNumbers(real - other.real, imaginary - other.imaginary);
    }

    ComplexNumbers operator*(const ComplexNumbers& other) const {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return ComplexNumbers(newReal, newImaginary);
    }

    ComplexNumbers operator/(const ComplexNumbers& other) const {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double newReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double newImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return ComplexNumbers(newReal, newImaginary);
    }   

    void show() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    double real1, imaginary1, real2, imaginary2;

    std::cout << "Introduce la parte real e imaginaria del primer número complejo: ";
    std::cin >> real1 >> imaginary1;
    std::cout << "Introduce la parte real e imaginaria del segundo número complejo: ";
    std::cin >> real2 >> imaginary2;

    ComplexNumbers complex1(real1, imaginary1);
    ComplexNumbers complex2(real2, imaginary2);

    ComplexNumbers sum = complex1 + complex2;
    ComplexNumbers difference = complex1 - complex2;
    ComplexNumbers product = complex1 * complex2;
    ComplexNumbers quotient = complex1 / complex2;

    std::cout << "Suma: ";
    sum.show();
    std::cout << "Diferencia: ";
    difference.show();
    std::cout << "Producto: ";
    product.show();
    std::cout << "Cociente: ";
    quotient.show();

    return 0; 
}