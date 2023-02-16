#include <iostream>

#ifndef N
#define N 5  
#endif

int main() {
    int x = 0;
    int a[N] = {0};

    std::cin >> x;
    a[1] = x;
    for (int i = 0; i < N - 1; i++) {
        if (i == N - 2) {
            std::cin >> x;
            a[0] = x;
        } else {
            std::cin >> x;
            a[i+2] = x;
        }
    }  
    for (int i = 0; i < N; i++) {
        std::cout << a[i]; 
    }
    std::cout << std::endl;
    return 0;
}