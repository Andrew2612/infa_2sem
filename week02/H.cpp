#include <iostream>


int main() {
    int n = 0;
    std::cin >> n;
    int www = 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            www++;
        }
    }

    if (www > 0) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }
    return 0;
}