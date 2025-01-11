#include "point2D.h"
#include <iostream>
#include <string>

namespace robot {

enum class Direccion {
    Norte,
    Sur,
    Este,
    Oeste
};

class Robot {
public:
    // Constructor
    Robot(const std::string& nombre, const Point2D& posicion, Direccion direccion, int cansancio)
        : nombre_(nombre), posicion_(posicion), direccion_(direccion), cansancio_(cansancio) {}

    // Getters
    std::string getNombre() const { return nombre_; }
    Point2D getPosicion() const { return posicion_; }
    Direccion getDireccion() const { return direccion_; }
    int getCansancio() const { return cansancio_; }

    // Métodos de movimiento
    void GiroDerecha() {
        switch (direccion_) {
            case Direccion::Norte: direccion_ = Direccion::Este; break;
            case Direccion::Este: direccion_ = Direccion::Sur; break;
            case Direccion::Sur: direccion_ = Direccion::Oeste; break;
            case Direccion::Oeste: direccion_ = Direccion::Norte; break;
        }
    }

    void GiroIzquierda() {
        switch (direccion_) {
            case Direccion::Norte: direccion_ = Direccion::Oeste; break;
            case Direccion::Oeste: direccion_ = Direccion::Sur; break;
            case Direccion::Sur: direccion_ = Direccion::Este; break;
            case Direccion::Este: direccion_ = Direccion::Norte; break;
        }
    }

    void Avanzar() {
        switch (direccion_) {
            case Direccion::Norte: posicion_.y++; break;
            case Direccion::Sur: posicion_.y--; break;
            case Direccion::Este: posicion_.x++; break;
            case Direccion::Oeste: posicion_.x--; break;
        }
        cansancio_++;
    }

    void EjecutaSecuencia(const std::string& secuencia) {
        for (char comando : secuencia) {
            switch (comando) {
                case 'A': Avanzar(); break;
                case 'D': GiroDerecha(); break;
                case 'I': GiroIzquierda(); break;
            }
        }
    }

    // Sobrecarga del operador de inserción
    friend std::ostream& operator<<(std::ostream& os, const Robot& robot) {
        os << robot.nombre_ << " posicion(" << robot.posicion_.x << "," << robot.posicion_.y << ") cansancio " << robot.cansancio_;
        return os;
    }

private:
    std::string nombre_;
    Point2D posicion_;
    Direccion direccion_;
    int cansancio_;
};

} // namespace robot