#include <iostream>


bool reserve_memory(size_t N, int *ptr) {
    if (ptr != nullptr) {
        return false;
    }
    ptr = new int[N];
    return true;
}
void free_memory(int* ptr) {
    delete [] ptr;
}



int main() {
    int N = 0;
    int* ptr = nullptr;
    std::cin >> N;
    std::cout << reserve_memory(N, ptr) << std::endl;
    free_memory(ptr);
    return 0;
}