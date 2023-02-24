#include <iostream>

#ifndef N
#define N 5  
#endif

int main() {
    int arr[N];
    for (int i = 0; i<N; i++) {
        std::cin >> arr[i]; 
    }
    int last = arr[N-1];

    for (int i = N-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    for (int i = 0; i<N; ++i) {
        std::cout << arr[i] << ' '; 
    }
    return 0;
}