#include <iostream>

int main() {
    int res = -1;
    int x = 0;

    std::cin >> x;
    if (x % 2 == 0) {
        res++;
    }
    while (x != 0) {
        std::cin >> x;
        if (x % 2 == 0){
            res++;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
