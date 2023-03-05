#include <iostream>


#ifndef N
#define N 10
#endif

void swap(int& lha, int& rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}


void family_triangle(int (&array)[N], int parent_ind, int size){
    if (2 * parent_ind + 1 <= size and array[parent_ind] < array[2 * parent_ind + 1]) {
        swap(array[parent_ind], array[2 * parent_ind + 1]);
    }

    if (2 * parent_ind + 2 <= size and array[parent_ind] < array[2 * parent_ind + 2]) {
        swap(array[parent_ind], array[2 * parent_ind + 2]);
    }
}

void cheops_sort(int (&array)[N], int i) {
    if (i == 0) {
        return;
    }

    for (int cnt = i; cnt >= 0; cnt--) {
        family_triangle(array, cnt, i); 
    }
    swap(array[0], array[i]); 
    cheops_sort(array, i-1);
}

int main() {
    int array[N];
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    cheops_sort(array, N-1);

    for (int i = 0; i < N; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}