#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    if (a == 1 || a == 0) {
        a = 3;
    }
    while (a % 2 == 0) {
        a /= 2;
    }
    if (a == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}