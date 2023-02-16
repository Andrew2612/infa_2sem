#include <iostream>

#ifndef N
#define N 3
#endif
#ifndef M
#define M 3
#endif


void print_transoposed(int (&array)[N][M]) {
    for (int i = 0; i < M; i++) {
        for(int j = 0; i < N; i++) {
            std::cout << array[i][j]; 
        }
        std::cout << std::endl;
    }        
}


int main() {
    int x = 0;
    int a[N][M];


    for (int i = 0; i < M; i++) {
        for(int j = 0; i < N; i++) {
            std::cin >> x;
            a[i][j] = x; 
        }
    }
    print_transoposed(a);

}