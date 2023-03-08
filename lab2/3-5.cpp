#include <iostream>
#include <random>

#ifndef N
#define N 10
#endif

int test_forward(unsigned array[]) {
    forward_step(array, 0, N-1);
    for (int i = 1; i < N; i++) {
        if (array[i-1] > array[i]) {
            return -1;
        }
    }
    return 0;
}

int test_backward(unsigned array[]) {
    backward_step(array, N-1, 0);
    for (int i = 1; i < N; i++) {
        if (array[i-1] > array[i]) {
            return -1;
        }
    }
    return 0;
}

int test_shaker(unsigned array[]) {
    shaker_sort(array, 0, N-1);
    for (int i = 1; i < N; i++) {
        if (array[i-1] > array[i]) {
            return -1;
        }
    }
    return 0;
}


void swap(unsigned &i, unsigned &j) {
    unsigned tmp = j;
    j = i;
    i = tmp;
}

void forward_step(unsigned array[], unsigned const begin_idx, unsigned const end_idx) {
    for (unsigned i = begin_idx; i < end_idx; i++) {
        if (array[i] > array[i + 1]) {
            swap(array[i], array[i + 1]);
        }
    }
    return;
}

void backward_step(unsigned array[], unsigned const begin_idx, unsigned const end_idx) {
    for (unsigned i = begin_idx; i > end_idx; i--) {
        if (array[i - 1] > array[i]) {
            swap(array[i], array[i - 1]);
        }
    }
    return;
}


void shaker_sort(unsigned array[], unsigned const begin_idx, unsigned const end_idx) {
    unsigned left = begin_idx, right = end_idx;
    while (left <= right) {
        forward_step(array, left, right);
        right--;
        backward_step(array, right, left);
        left++;
    }
}


int main() {
    unsigned array[N] = {0};
    unsigned seed = 1000-7;
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned> dstr(0, N-1);

    for (int i = 0; i < N; i++) {
        array[i] = dstr(rng);
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    shaker_sort(array, 0, N-1);

    for (int i = 0; i < N; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}