#include <iostream> 
#include <chrono>
#include <random>

#ifndef N
#define N 100
#endif

//uporyadochenni massiv
void create_array_1(int (&array)[N]) {
    for (int i = 0; i < N; i++){
        array[i] = 2 * i + 1;
    }
}

//NEuporyadochenni massiv
void create_array_2(int (&array)[N]) {
    unsigned seed = 1001;
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned>dstr(0, N);

    for (int i = 0; i < N; i++) {
        array[i] = dstr(rng);
    }
}

int ss(int (&arr)[N], int left, int right, int search_for) {
    int pivot = (left + right)/2;
    if (arr[pivot] == search_for) {
        return pivot;
    } else if (arr[pivot] > search_for) {
        return ss(arr, left, pivot,search_for);
    } else {
        return ss(arr, pivot, right, search_for);
    }
}

int search (int (&arr)[N], int search_for) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == search_for) {
            return arr[i];
        }
    }
    return -1;
}

int bin_search (int (&arr)[N], int left, int right, int search_for) {
    int center = (left + right) / 2.;
    if (arr[left] == search_for) {
        return arr[left];
    } else if (arr[right] == search_for) {
        return arr[right];
    } else if (arr[left + 1] == arr[right]){
        return -1;
    } else if (arr[right] < search_for) {
        return -1;
    } else if (arr[left] > search_for) {
        return -1;
    } else if (arr[center] < search_for) {
        return bin_search(arr, center, right, search_for);
    } else {
        return  bin_search(arr, left, center, search_for);
    }
}



int main ( ) {
    int arr[N] = {0};
    int search_for = N-10;
    //create_array_2(arr);
    create_array_1(arr);
    
    auto begin = std::chrono::steady_clock::now();
    for (int i = 1000; i > 0; i--) {
        //search(arr, search_for);
        bin_search(arr, 0, N-1,search_for);
    }
    auto end = std::chrono::steady_clock::now();
    auto time_span =
    std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    std::cout << time_span.count() << std::endl;
    
    return 0 ;
}

