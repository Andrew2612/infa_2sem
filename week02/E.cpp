#include <iostream>

int fibonacci(int i) {
    if (i == 0) {
        return 1;
    }
    if (i == 1) {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}


int main() {
    int i = 0;
    std::cin >> i;

    std::cout << fibonacci(i) << std::endl;   
    return 0;
}