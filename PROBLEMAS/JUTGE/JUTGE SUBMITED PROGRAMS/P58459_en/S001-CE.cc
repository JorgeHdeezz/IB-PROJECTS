/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file
  * @author alu0101548036@ull.edu.es 
  * @date 
  * @brief 
  * @bug 
  * @see 
*/

#include "fecha.h"

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

bool Fecha::esBisiesto(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Fecha::esValida() const {
    if (anio < 1 || mes < 1 || mes > 12 || dia < 1)
        return false;

    int diasEnMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && esBisiesto(anio))
        return (dia <= 29);
    else
        return (dia <= diasEnMes[mes]);
}

void Fecha::mostrarFecha() const {
    std::cout << dia << '/' << mes << '/' << anio << std::endl;
}
