#include <iostream>
#include <random>
#include <chrono>
#include <fstream>


#ifndef N
#define N 100000
#endif


void swap(int &i, int &j) {
    unsigned tmp = j;
    j = i;
    i = tmp;
}

void sort (int array[], long long int &number_of_swaps)
{
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {    
            if (array[j-1] > array[j]) {
                swap(array[j-1], array[j]);
                number_of_swaps++;
            }
        }
    }
}

void hibbardSort (int array[], long long int& number_of_swaps) 
{
    int step = std::log2(N-1);
    while (step >= 1) {
        for (int i = 0; i + step < N; i++)
		{
			if (array[i] > array[i + step])
			{
				swap(array[i], array[i + step]);
                number_of_swaps++;
			}
		}
		step -= 1;
    }
    sort(array, number_of_swaps);
}

int fibonacci(int i) {
    if (i == 0) {
        return 1;
    }
    if (i == 1) {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

void fibSort (int array[], long long int& number_of_swaps) 
{
    int iter = 0;
    while (fibonacci(iter) < N) {
        iter++;
    }
    iter--;
    int step = 0;
    while (iter >= 1) {
        step = fibonacci(iter);
        for (int i = 0; i + step < N; i++)
		{
			if (array[i] > array[i + step])
			{
				swap(array[i], array[i + step]);
                number_of_swaps++;
			}
		}
		iter -= 1;
    }
    sort(array, number_of_swaps);
}


int main() {
    int array[N] = {0};
    std::ofstream out;
    //out.open("hibbardsort.csv", std::ios::app);
    out.open("fibsort.csv", std::ios::app);
    //out << "N,time,number of swaps" << std::endl;

    long long int number_of_swaps = 0;

    unsigned seed = 1000-7;
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<int> dstr(0, 100000);


    for (int j = 0; j < N; j++) {
        array[j] = dstr(rng);
    }
    auto begin = std::chrono::steady_clock::now();
    fibSort(array, number_of_swaps);
    auto end = std::chrono::steady_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    
    if (out.is_open()) {
        out << N << ',' << (float) time_span.count() << "," << number_of_swaps << std::endl;
    }
    number_of_swaps = 0;

    out.close();
    
    return 0;
}