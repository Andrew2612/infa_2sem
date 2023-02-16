#include <iostream>

#ifndef N
#define N 5
#endif

int finder(int (&array)[N]) {
    for (int i = 0; i < N ; i++) {
        if (array[i] != 0) {
            return array[i];
        }
    }
}

int main() {
    int x = 0;
    int a[N] = {0};

    for (int i = 0; i < N ; i++) {
        std::cin >> x;
        for (int j = 0; j < i; j++) {
            if (a[j] == x) {
                a[j] = 0;
                a[i] = 0;
            } else {
                a[i] = x;
            }
        }
    }  


    std::cout << finder(a) << std::endl;
    return 0;
}