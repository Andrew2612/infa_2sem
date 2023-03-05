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

void sort (int array[], int &number_of_swaps)
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

void combSort (int array[], int& number_of_swaps) 
{
    int step = N/2;
    while (step >= 1) {
        for (int i = 0; i + step < N; i++)
		{
			if (array[i] > array[i + step])
			{
				swap(array[i], array[i + step]);
                number_of_swaps++;
			}
		}
		step /= 2;
    }
    sort(array, number_of_swaps);
}


int main() {
    int array[N] = {0};
    std::ofstream out;
    out.open("combsort.csv", std::ios::app);
    //out << "N,time,number of swaps" << std::endl;

    int number_of_swaps = 0;

    unsigned seed = 1000-7;
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<int> dstr(0, 100000);


    for (int j = 0; j < N; j++) {
        array[j] = dstr(rng);
    }
    auto begin = std::chrono::steady_clock::now();
    combSort(array, number_of_swaps);
    auto end = std::chrono::steady_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    
    if (out.is_open()) {
        out << N << ',' << (float) time_span.count() << "," << number_of_swaps << std::endl;
    }
    number_of_swaps = 0;

    out.close();
    
    return 0;
}