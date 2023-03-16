#include <iostream>
#include <string>


struct Students
{
    std::string name;
    float result;
};

void swap(Students &lha, Students  &rha) {
    Students tmp = lha;
    lha = rha;
    rha = tmp;
}

void qsort(Students (&arr)[], int N, int ind_left_base, int ind_right_base){
    int pivot = arr[(ind_left_base + ind_right_base)/2].result;
    int ind_left = ind_left_base;
    int ind_right = ind_right_base;
    while (ind_left < ind_right){
        while(arr[ind_left].result < pivot){
            ind_left++;
        }
        while(arr[ind_right].result > pivot){
            ind_right--;
        }
        if (ind_left <= ind_right){
            swap(arr[ind_left], arr[ind_right]);
            ind_left++;
            ind_right--;
        }
    }
    
    if (ind_left < ind_right_base){
        qsort(arr, N, ind_left, ind_right_base);
    }
    if (ind_right > ind_left_base) {
        qsort(arr, N, ind_left_base, ind_right);
    }
}

int main() {
    float M;
    int N;
    std::cin >> N;
    struct Students students[N];
    for (int i = 0; i < N; i++) {
        std::cin >> students[i].name >> students[i].result;
    }
    std::cin >> M;

    qsort(students, N, 0, N-1);

    for (int i = 0; i < N; i++) {
        if (students[i].result > M) {
            for (int j = i; j < N; j++) {
                std::cout << students[j].name << ' ';
            }
            break;
        }
    }
    std::cout << std::endl;
}