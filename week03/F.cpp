#include <iostream>

#ifndef N
#define N 5
#endif

int binsearch(int (&array)[N]) 
{
    for (int i = 0; i < N-1; i++) 
    {
        if (array[i+1] > array[i]) 
        {
            return i;
        }
    }
}

int main() {
    int x = 0;
    int a[N] = {0};


    for (int i = 0; i < N ; i++) {
        std::cin >> x;
        a[i] = x;
    }  

    std::cout << binsearch(a) << std::endl;
    return 0;
}