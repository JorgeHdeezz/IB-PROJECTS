#include <iostream>

#include <iostream>
using namespace std;

int egcd (int a,int b) {
    if (b==0) return a;
    return egcd(b,a%b);
}

int main () {
	int a,b;
    cin >> a >> b;
    std::cout << "The gcd of " << a << " and " << b << " is " << egcd(a,b)  << '.' << std::endl;

}
