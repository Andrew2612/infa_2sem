#include <iostream>

//не ну х знает вообще

#ifndef N
#define N 5
#endif

int main() {
    int x = 0;
    int b[2 * N] = {0};
    int c[2 * N] = {0};
    int a[2 * N] = {0};


    // std::cin >> x;
    // a[0] = x;
    for (int i = 0; i < 2*N ; i++) {
        std::cin >> x;
        for (int j = 0; j < 2*N-1; j++) {
            //if (a[j])
        }
        a[i] = x;
    }



    for (int i = 0; i < 2 * N; i++) {
        std::cout << a[i]; 
    }
    std::cout << std::endl;
    return 0;
}