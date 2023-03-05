#include <iostream>

#ifndef N
#define N 10
#endif
void swap(int &lha, int  &rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}

int gnomeSort(int (&arr)[N])
{
    int index = 0;
  
    while (index < N) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            index--;
        }
    }
}


int main () 
{
    int arr[N] = {5, 3, 2, 4, 7, 9, 1, 0, 6, 8};
    gnomeSort(arr);
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}