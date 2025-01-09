// Este programa no usa fstream

#include <iostream>
#include <vector>
#include <string>

class Graph {
private: 
    int numVertices; 
    std::vector<std::vector<int>> adjMatrix;
    bool isDirected;

public: 
    Graph(int numVertices, bool isDirected) : numVertices(numVertices), isDirected(isDirected) {
        adjMatrix.resize(numVertices, std::vector<int>(numVertices, 0));
    }

    void AddEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        if (!isDirected) {
            adjMatrix[v][u] = 1;
            }
    }

    void Display() const {
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                std::cout << adjMatrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    std::string GetType() const {
        return isDirected ? "Dirigido" : "No dirigido";
    }
};

int main() {
    int numVertices; 
    bool isDirected; 

    std::cout << "Introduce el numero de vertices: "; 
    std::cin >> numVertices;
    std::cout << "El grafo es dirigido (1) o no dirigido (0): ";
    std::cin >> isDirected;

    Graph graph(numVertices, isDirected);

    int u, v; 
    char choice; 

    do {
        std::cout << "Introduce el vertice u: ";
        std::cin >> u;
        std::cout << "Introduce el vertice v: ";
        std::cin >> v;
        graph.AddEdge(u, v);

        std::cout << "Desea agregar otra arista? (s/n): ";
        std::cin >> choice;
    } while (choice == 's' || choice == 'S');

    std::cout << "Matriz de adyacencia del grafo " << graph.GetType() << std::endl;
    graph.Display();

    std::cout << "El grafo es: " << graph.GetType() << std::endl;

    return 0; 
}  