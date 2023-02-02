#include <iostream>
#include <cmath>

int main() {
    int n = 0, m = 1;
    std::cin >> n;

    if (n < 0) {
        std::cout<< "Факториал не определен" << std::endl;
    }
    else if (n == 0) {
        std::cout<< m << std::endl;
    }
    else {
        while (n > 0) {
            m *= n;
            n--;
        }
        std::cout<< m << std::endl;
    }
    return 0;
}
