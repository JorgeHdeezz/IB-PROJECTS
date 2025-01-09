#include <iostream>

void posicionPlano(std::string s) {
    int x = 0, y = 0;
    for (char c : s) {
        if (c == 'n') --y;
        else if (c == 's') ++y;
        else if (c == 'e') ++x;
        else --x;
    }
    std::cout << "(" << x << ", " << y << ")" << std::endl;
    
}

int main() {
    std::string s;
    std::cin >> s;

    posicionPlano(s);

    return 0; 
}