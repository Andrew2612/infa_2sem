#include <iostream>

#ifndef N
#define N 7
#endif

void swap(int& lha, int& rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}

int main() {
    int a[N];
    for (int i = 0; i < N; i++) {
        std::cin >> a[i]; 
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j<N-i-1; j++) {
            if (a[j] < 0 and a[j+1] >= 0) {
                swap(a[j], a[j+1]);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << a[i] << ' '; 
    }
    std::cout << std::endl;
    return 0;
}