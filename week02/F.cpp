#include <iostream>

int recursive_factorial(int n) {
    if (n > 1) {
        return n * recursive_factorial(n - 1);
    }
}


int main() {
    int n = 0;
    std::cin >> n;

    if (n == 0 || n == 1) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << recursive_factorial(n) << std::endl;   
    }
    return 0;
}
