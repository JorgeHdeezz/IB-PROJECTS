#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Rey {
private:
    std::string nombre_;
    int start_year_;
    int end_year_;

public:
    Rey() : nombre_(""), start_year_(0), end_year_(0) {}
    Rey(const std::string &nombre, int start_year, int end_year) : nombre_(nombre), start_year_(start_year), end_year_(end_year) {}

    std::string nombre() const { return nombre_; }
    int start_year() const { return start_year_; }
    int end_year() const { return end_year_; }

    bool operator<(const Rey &other) const {
        return start_year_ < other.start_year_;
    }

    friend std::ostream& operator<<(std::ostream &os, const Rey &rey) {
        os << rey.nombre_ << " " << rey.start_year_ << " " << rey.end_year_;
        return os;
    }

    friend std::istream& operator>>(std::istream &is, Rey &rey) {
        is >> rey.nombre_ >> rey.start_year_ >> rey.end_year_;
        return is;
    }
};

// Función para guardar los reyes en un vector
void GuardarReyes(std::vector<Rey>& reyes) {
    int n;
    std::cout << "Ingrese el número de reyes: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        Rey rey;
        std::cout << "Ingrese el nombre, año de inicio y año de fin del reinado del rey " << i + 1 << ": ";
        std::cin >> rey;
        reyes.push_back(rey);
    }
}

// Función para mostrar los reyes
void MostrarReyes(const std::vector<Rey>& reyes) {
    for (const auto& rey : reyes) {
        std::cout << rey << std::endl;
    }
}

int main() {
    std::vector<Rey> reyes;
    GuardarReyes(reyes);
    MostrarReyes(reyes);
    return 0;
}