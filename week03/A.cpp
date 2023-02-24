#include <iostream>

#ifndef N
#define N 5
#endif

void swap(int& lha, int& rha) 
{
    int tmp = lha;
    lha = rha;
    rha = tmp; 
}

int main() {
    int arr[N] = {0};
    for (int i = 0; i<N; ++i) {
        std::cin >> arr[i]; 
    }

    for (int i = 0; i<N/2; ++i) {
        swap(arr[i], arr[N-1-i]);
    }

    for (int i = 0; i<N; ++i) {
        std::cout << arr[i] << ' '; 
    }
    return 0;
}