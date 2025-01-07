#include <iostream>

class Estufa {
    private: 
        int volumen = 0; 
        int temperatura = 0;
    public: 
        Estufa(int temperatura, int volumen)
            : temperatura(temperatura), volumen(volumen) {}

        int getTemperatura() {
            return temperatura;
        }
        int getVolumen() {
            return volumen; 
        }
        void setTemperatura(int temperatura) {
            this->temperatura = temperatura; 
        }
        void setVolumen(int volumen) {
            this->volumen = volumen; 
        }
};
int main() {
    Estufa estufa(100, 200); 
  estufa.setVolumen(100);
estufa.setTemperatura(200);
std::cout << "El volumen de la estufa es: " << estufa.getVolumen() << "L" << std::endl;
std::cout << "La temperatura de la estufa es: " << estufa.getTemperatura() << "C" << std::endl;

}