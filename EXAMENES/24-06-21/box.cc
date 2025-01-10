#include <iostream>
#include <fstream>

class Box {
  private: 
    double length_;
    double breadth_;
    double height_;

  public: 
    Box() : length_(0), breadth_(0), height_(0) {} // Constructor por defecto
    Box(double length, double breadth, double height) : length_(length), breadth_(breadth), height_(height) {} // Constructor con parámetros
    
    // Getters
    int length() { return length_; }
    int breadth() { return breadth_; }
    int height() { return height_; }

    bool operator==(const Box& otro) const {  // Sobrecarga del operador ==
      return length_ == otro.length_ && breadth_ == otro.breadth_ && height_ == otro.height_;
    }

    friend std::ostream& operator<<(std::ostream& os, const Box& box) { // Sobrecarga del operador <<
      os << "Length: " << box.length_ << ", Breadth: " << box.breadth_ << ", Height: " << box.height_;
      return os;
    }

    friend std::istream& operator>>(std::istream& is, Box& box) { // Sobrecarga del operador >>
      is >> box.length_ >> box.breadth_ >> box.height_;
      return is;
    }    
};

int main() {
    Box box1(10, 20, 30);
    Box box2;
    Box box3(10, 20, 30);

    std::ifstream file("box.txt");
    if (file.is_open()) {
        file >> box2;
        file.close();
    } else {
        std::cerr << "No se pudo abrir el archivo" << std::endl;
    }

    if (box1 == box3) {
        std::cout << "box1 y box3 son iguales" << std::endl;
    } else {
        std::cout << "box1 y box3 son diferentes" << std::endl;
    }

    std::cout << "Box 1: " << box1 << std::endl;
    std::cout << "Box 2: " << box2 << std::endl;
    std::cout << "Box 3: " << box3 << std::endl;

    return 0;
}