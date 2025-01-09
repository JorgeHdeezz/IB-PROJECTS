#include <iostream>
#include <string>
#include <vector>

class Book {
private: 
    std::string title;
    int year;
    int price; 
public: 
    // Constructor
    Book(std::string title, int year, int price) : title(title), year(year), price(price) {}
    
    // Getters 
    std::string getTitle() const { return title; }
    int getYear() const { return year; }
    int getPrice() const { return price; }

    // Mostrar libro
    void show() const {
        std::cout << "Título: " << title << ", Año: " << year << ", Precio: " << price << "€" << std::endl;
    }
};

void AgregarLibro(std::vector<Book>& books) {
    std::string title;
    int year, price;
    std::cout << "Introduce el título del libro: ";
    std::cin.ignore();
    std::getline(std::cin, title);
    std::cout << "Introduce el año de publicación: ";
    std::cin >> year;
    std::cout << "Introduce el precio del libro: ";
    std::cin >> price;
    float impuesto = (price * 3,6) / 100; // 3,6% de impuesto
    float precioFinal = price + impuesto;
    
    Book newBook(title, year, precioFinal);
    books.push_back(newBook);
}

void MostrarLibros(const std::vector<Book>& books) {
    if (books.empty()) {
        std::cout << "No hay libros registrados." << std::endl;
    } else {
        for (const auto& book : books) {
            book.show();
        }
    }
}

int main() {
    std::vector<Book> libros;
    int opcion;

    do {
        std::cout << "Menú:" << std::endl;
        std::cout << "1. Agregar libro" << std::endl;
        std::cout << "2. Mostrar libros" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                AgregarLibro(libros);
                break;
            case 2:
                MostrarLibros(libros);
                break;
            case 3:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción inválida." << std::endl;
        }
    } while (opcion != 3);
    return 0;
}