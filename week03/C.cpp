#include <iostream>

#ifndef N
#define N 10
#endif

int main() {
    int x = 0;
    int k = 0;
    int a[N] = {0};

    std::cin >> k;
    std::cin >> x;
    a[k] = x;
    for (int i = 0; i < N - 1; i++) {
        if (i == N - k - 1) {
            k = -i - 1;
        }
        std::cin >> x;
        a[i+k+1] = x;
    }  
    for (int i = 0; i < N; i++) {
        std::cout << a[i] << ' '; 
    }
    std::cout << std::endl;
    return 0;
}
