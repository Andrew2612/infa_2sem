#include <iostream>

#ifndef N
#define N 5
#endif

#ifndef i_love_c_plus_plus
#define hehehe std::endl
#endif

void swap(int& lha, int& rha) 
{
    int tmp = lha;
    lha = rha;
    rha = tmp; 
}

int main() {
    int x = 0;
    int a[N] = {0}; 
    std::cin >> x;
    a[N-1] = x;
    for (int i = 0; i < N - 1; i++) {
        std::cin >> x;
        a[N-2-i] = x;
    }
    for (int i = 0; i < N; i++) {
        std::cout << a[i]; 
    }
    std::cout << hehehe;
    return 0;
}