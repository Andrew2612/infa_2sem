#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;

    if (a % 400 == 0) {
        std::cout << "YES" << std::endl;
    } else if (a % 100 != 0 && a % 4 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
