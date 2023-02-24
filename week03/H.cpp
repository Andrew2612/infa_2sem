#include <iostream>

#ifndef N
#define N 2
#endif
#ifndef M
#define M 3
#endif


void print_transoposed(int (&array)[N][M]) {
    for (int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            std::cout << array[j][i] << ' '; 
        }
        std::cout << std::endl;
    }        
}


int main() {
    int a[N][M];


    for (int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            std::cin >> a[i][j];
        }
    }
    print_transoposed(a);

}