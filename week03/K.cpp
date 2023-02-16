    #include <iostream>

#ifndef N
#define N 3
#endif

int trace (int (&array)[N][N]) {
    int res = 0;
    for (int i = 0; i < N; i++) {
        res += array[i][i];
    }
    return res;
}



int main() {
    int x = 0;
    int a[N][N];


    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> x;
            a[i][j] = x; 
        }
    }

    std::cout << trace(a) << std::endl;
}
