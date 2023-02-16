#include <iostream>

#ifndef N
#define N 5
#endif

int main() {
    int x = 0;
    int number_plus = 0;
    int number_minus = 0;
    int a[N] = {0};

    for (int i = 0; i < N ; i++) {
        std::cin >> x;
        if (x >= 0) {
            a[number_plus] = x;
            number_plus++;
        } else {
            a[N - 1 - number_minus] = x;
            number_minus++;
        }
    }  

    for (int i = 0; i < number_plus-1; i++) {
        if (a[i] < a[i+1]) {
            int swap = a[i+1];
            a[i+1] = a[i];
            a[i] = swap;
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << a[i]; 
    }
    std::cout << std::endl;
    return 0;
}