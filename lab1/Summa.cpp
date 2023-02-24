#include <iostream> 
#include <chrono>
#include <random>

#ifndef N
#define N 1000
#endif

//NEuporyadochenni massiv
void create_array_2(int (&array)[N]) {
    unsigned seed = 1001;
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned>dstr(0, N);

    for (int i = 0; i < N; i++) {
        array[i] = dstr(rng);
    }
}

int search (int (&arr)[N], int search_for) {
    for (int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++)
        if (arr[i] == N+1) {
            return arr[i];
        }
    }
    return -1;
}