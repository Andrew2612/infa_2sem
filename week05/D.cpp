#include <iostream>

void swap(int &i, int &j) {
    unsigned tmp = j;
    j = i;
    i = tmp;
}

void input_array(int* ptr, int N) 
{
    for (int i = 0; i < N; i++) {
        std::cin >> ptr[i];
    }
}
void reverse(int* ptr, int N) 
{
    for (int i = 0; i < N/2 ; i++) {
        swap(ptr[i], ptr[N-i-1]);
    }
    
}
void print(const int* ptr, int N) 
{
    for (int i = 0; i < N; i++) {
        std::cout << ptr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() 
{
    int N = 0;
    std::cin >> N;
    int* ptr = new int[N];

    input_array(ptr, N);
    reverse(ptr, N);
    print(ptr, N);

    return 0;
}