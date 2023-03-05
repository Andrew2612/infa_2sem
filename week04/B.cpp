#include <iostream>


#ifndef N
#define N 10
#endif

void swap(int& lha, int& rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}


void qsort(int (&array)[N], int left, int right) {
    if (left < right) {
        int center = (left + right) / 2;
        int ind_left = left, ind_right = right;

        
        while (ind_left < ind_right) {

            while (array[ind_left] < array[center]) {
                ind_left++;
            }

            while (array[ind_right] > array[center]) {
                ind_right--;
            }
            if (ind_left >= ind_right) {
                break;
            }

            swap(array[ind_left], array[ind_right]);
        }
        if(array[ind_right] < array[ind_right - 1]) {
            swap(array[ind_right], array[ind_right - 1]);
        }
        if(array[ind_right + 1] < array[ind_right]) {
            swap(array[ind_right + 1], array[ind_right]);
        }

        qsort(array, left, ind_right);
        qsort(array, ind_right + 1, right);
    }
}

int main() {
    int array[N];
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    qsort(array, 0, N-1);
    for (int i = 0; i < N; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}