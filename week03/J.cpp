#include <iostream>

#ifndef N
#define N 3
#endif

#ifndef M
#define M 2
#endif

void swap(int& lha, int& rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}

int main() {
    int a[N][M] = {0};

    int b[N*M] = {0};
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> a[i][j];
            b[i * M + j] = a[i][j];
        } 
    }
    
    for (int i = 0; i < N * M; i++)
        for (int j = 0; j< N * M - i - 1; j++) {
            if (b[j] > b[j+1]) {
                swap(b[j], b[j+1]);
            }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = b[i * M + j];
            std::cout << a[i][j] << ' ';
        } 
        std::cout << std::endl;
    }

    return 0;
}