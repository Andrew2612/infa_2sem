#include <iostream>


int main() {
    int n = 0;
    std::cin >> n;
    int n_copy = n;
    int counter = 0;

    while (n > 0) {
        counter *= 10;
        counter += (n % 10);
        n /= 10;
    }

    if (counter == n_copy) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}