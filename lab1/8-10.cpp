#include <iostream> 
#include <chrono>
#include <random>

#ifndef N
#define N 100
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

int option1(int (&arr)[N], int search_for) {
    if (arr[0] == search_for) {
        return arr[0];
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] == search_for) {
            int tmp = arr[i];
            arr[i] = tmp;
            arr[0] = tmp;
            return arr[0];
        }
    }
    return -1;
}

int option2(int (&arr)[N], int search_for) {
    if (arr[0] == search_for) {
        return arr[0];
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] == search_for) {
            int tmp = arr[i];
            arr[i] = tmp;
            arr[i-1] = tmp;
            return arr[i-1];
        }
    }
    return -1;
}

int option3(int (&arr)[N], int search_for, int (&counter)[N]) {
    if (arr[0] == search_for) {
        counter[0]++;
        return arr[0];
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] == search_for) {
            counter[i]++;
            if (counter[i] >counter[i-1]) {
                int tmp1 = counter[i];
                counter[i] = tmp1;
                counter[i-1] = tmp1;
                int tmp2 = arr[i];
                arr[i] = tmp2;
                arr[i-1] = tmp2;
                return arr[i-1];
            } else {
                return arr[i];
            }
        }
    }
    return -1;
}

int main ( ) {
    int arr[N] = {0};
    int search_for = 0;
    int counter[N] = {0};
    create_array_2(arr);
    auto begin = std::chrono::steady_clock::now();
    //ravnomerno
    for (int i = N; i > 0; i--) {
        search_for = i - 10; 
        option1(arr, search_for);
        //option2(arr, search_for);
        //option3(arr, search_for, counter);
    }
    // //NEravnomerno
    // for (int i = N; i > 0; i--) {
    //     if (i <= N/2) {
    //         search_for = N/2;
    //     } else {
    //         search_for = i - 10;
    //     } 
    //     option1(arr, search_for);
    //     option2(arr, search_for);
    //     option3(arr, search_for, counter);
    // }
    auto end = std::chrono::steady_clock::now();
    auto time_span =
    std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    std::cout << time_span.count() << std::endl;
    
    return 0;
}


