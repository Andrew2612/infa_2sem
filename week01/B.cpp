#include <iostream>
#include <cmath>

int main() {
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    if (b*b - 4*a*c < 0) {
        std::cout << '\n';
    }

    else if (b*b - 4*a*c == 0) {
        std::cout << (b/(2*a)) << std::endl;
    }
    else {
        std::cout << ((b + sqrt(b*b - 4*a*c))/(2*a)) << ' '
        << ((b - sqrt(b*b - 4*a*c))/(2*a)) << std::endl;
    }
    return 0;
}
