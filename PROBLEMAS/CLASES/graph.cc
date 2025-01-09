#include <iostream>
#include <vector>
#include <utility>

class Graph {
private:
    int numVertices_; // Número de vértices
    int numEdges_;    // Número de aristas
    std::vector<std::pair<int, int>> edges_; // Lista de aristas

public:
    // Constructor predeterminado
    Graph() : numVertices_(0), numEdges_(0) {}

    // Constructor parametrizado
    Graph(int vertices, int numEdges, std::vector<std::pair<int, int>> edges)
        : numVertices_(vertices), numEdges_(numEdges), edges_(edges) {}

    // Métodos para obtener información
    int numVertices() const { return numVertices_; }
    int numEdges() const { return numEdges_; }
    std::vector<std::pair<int, int>> edges() const { return edges_; }

    // Mostrar el grafo
    void mostrar() const {
        std::cout << "Número de vértices: " << numVertices_ 
                  << ", Número de aristas: " << numEdges_ << std::endl;
        std::cout << "Aristas:" << std::endl;
        for (const auto& edge : edges_) {
            std::cout << edge.first << " -> " << edge.second << std::endl;
        }
    }
    
    // Leer el grafo desde el usuario
    void leerGrafo(int numVertices, int numEdges) {
        numVertices_ = numVertices;
        numEdges_ = numEdges;

        if (numVertices_ <= 0 || numEdges_ < 0) {
            std::cerr << "Número de vértices o aristas inválido." << std::endl;
            return;
        }

        edges_.clear(); // Limpiar las aristas existentes
        std::cout << "Introduce las aristas como pares de vértices (u v):" << std::endl;

        for (int i = 0; i < numEdges_; ++i) {
            int u, v;
            std::cin >> u >> v;

            // Validar los vértices
            if (u < 0 || u >= numVertices_ || v < 0 || v >= numVertices_) {
                std::cerr << "Vértices inválidos: " << u << " -> " << v << std::endl;
                return;
            }
            edges_.emplace_back(u, v); // Agregar la arista
        }
    }
};

int main() {
    int numVertices, numEdges;

    // Leer el número de vértices y aristas
    std::cout << "Introduce el número de vértices: ";
    std::cin >> numVertices;
    std::cout << "Introduce el número de aristas: ";
    std::cin >> numEdges;

    // Crear un objeto de la clase Graph
    Graph graph;

    // Leer las aristas desde el usuario
    graph.leerGrafo(numVertices, numEdges);

    // Mostrar el grafo
    graph.mostrar();

    return 0;
}