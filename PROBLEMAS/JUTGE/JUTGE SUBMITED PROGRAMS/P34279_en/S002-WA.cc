#include <iostream>

int main() {
    int h, m, s;
    std::cin >> h >> m >> s;
    
    if (h >= 0 && h <= 24 && m >= 0 && m <= 60 && s >= 0 && s <= 60){
        int h2, m2, s2;
        s2 = s + 1;
        m2 = m + s2 / 60;
        h2 = h + m2 / 60;
        std::cout << h2 << ":" << m2 << ":" << s2 << std::endl;
    } else {
        return 0;
    }
}