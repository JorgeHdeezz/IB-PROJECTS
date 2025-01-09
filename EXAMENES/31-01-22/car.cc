#include <iostream>
#include <vector>

class Car {
private:
    std::string model_;
    std::string plate_;
    int kilometers_;

public:
    // Constructor por defecto
    Car() : model_(""), plate_(""), kilometers_(0) {}

    // Constructor con parámetros
    Car(std::string model, std::string plate, int kilometers) : model_(model), plate_(plate), kilometers_(kilometers) {}

    // Getters
    std::string model() const { return model_; }
    std::string plate() const { return plate_; }
    int kilometers() const { return kilometers_; }

    // Sobrecarga del operador ==
    bool operator==(const Car& other) const {
        return model_ == other.model_ && plate_ == other.plate_ && kilometers_ == other.kilometers_;
    }

    // Sobrecarga del operador <
    bool operator<(const Car& other) const {
        return kilometers_ < other.kilometers_;
    }

    // Sobrecarga del operador de extracción (ostream)
    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Model: " << car.model_ << ", Plate: " << car.plate_ << ", Kilometers: " << car.kilometers_;
        return os;
    }

    // Sobrecarga del operador de inserción (istream)
    friend std::istream& operator>>(std::istream& is, Car& car) {
        is >> car.model_ >> car.plate_ >> car.kilometers_;
        return is;
    }
};

// Función para ordenar los coches por kilómetros usando el algoritmo de burbuja
void bubbleSort(std::vector<Car>& cars) {
    int n = cars.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (cars[j + 1] < cars[j]) {
                std::swap(cars[j], cars[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<Car> cars = {
        Car("Seat", "1234ABC", 1000),
        Car("Renault", "5678DEF", 2000),
    };

    // Ordenar los coches por kilómetros usando el algoritmo de burbuja
    bubbleSort(cars);

    // Mostrar los coches ordenados
    for (const auto& car : cars) {
        std::cout << car << std::endl;
    }

    return 0;
}