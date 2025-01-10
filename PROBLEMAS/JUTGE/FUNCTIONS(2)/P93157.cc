#include <iostream>
#include <sstream>
#include <string>

int egcd(int a, int b) {
    if (b == 0) return a;
    return egcd(b, a % b);
}

bool read_rational(int& num, int& den) {
    std::string s;
    std::cin >> s;
    bool t = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            s[i] = ' ';
            t = true;
        } else if (!(s[i] >= '0' && s[i] <= '9')) return false;
    }
    if (!t) return false;
    std::stringstream ss;
    ss << s;
    ss >> num >> den;
    if (den == 0) return false;
    int mcd = egcd(num, den);
    num /= mcd;
    den /= mcd;
    return true;
}

int main() {
    int num, den;
    while (read_rational(num, den)) {
        std::cout << num << ' ' << den << std::endl;
    }
    return 0;
}