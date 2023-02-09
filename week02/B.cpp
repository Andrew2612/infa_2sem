#include <iostream>

int main() {
    int res = 0;

    int x = 0;
    std::cin >> x;
    while (x != 0) {
        std::cin >> x;
        if (x % 2 == 0){
            res++;
        }
    }
    std::cout << res;
    return 0;
}
