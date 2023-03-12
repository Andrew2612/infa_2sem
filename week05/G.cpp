#include <random>
#include <chrono>
#include <fstream>

void randomize(int* ptr, size_t N) {
    unsigned seed = 1001;
    std::default_random_engine rng(seed);
    std::uniform_int_distribution<unsigned> dstr(0, N);
    for (int i = 0; i < N; i++) {
        ptr[i] = dstr(rng);
    }
}

void create_outfile(int* ptr, size_t N, int step) {
    std::ofstream out("data.txt", std::ios::out);
    for (int i = 0; i < N; ++i) {
        if (out.is_open()) {
            out << step * (i + 1) << " " << ptr[i] << std::endl;
        }
    }
    out.close();
}
int search(int* arr, int N, int search_for) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == search_for) {
            return arr[i];
        }
    }
    return -1;
}

int bin_search(int* arr, int left, int right, int search_for) {
    int center = (left + right) / 2.;
    if (arr[left] == search_for) {
        return arr[left];
    }
    else if (arr[right] == search_for) {
        return arr[right];
    }
    else if (arr[left + 1] == arr[right]) {
        return -1;
    }
    else if (arr[right] < search_for) {
        return -1;
    }
    else if (arr[left] > search_for) {
        return -1;
    }
    else if (arr[center] < search_for) {
        return bin_search(arr, center, right, search_for);
    }
    else {
        return  bin_search(arr, left, center, search_for);
    }
}

int main() {
    int* data = nullptr;  // массив данных
    double* ans = nullptr;  // массив усредненных времен для каждого эксперимента 
    for (int N = 100; N < 100000; N += 100) {
        data = new int[N];
        for (int repeats = 0; repeats < 100; ++repeats) {
            randomize(data, N);
            auto begin = std::chrono::steady_clock::now();
            search(data, N, N-3);
            bin_search(data, 0, N-1, N-3);
            auto end = std::chrono::steady_clock::now();
            auto time_span = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
            int time = time_span.count();
        }
    }
    return 0;
}