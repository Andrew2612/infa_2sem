#include <iostream>
#include <cstring>

char* resize(const char* buf, int size, int new_size)
{
    char* b = new char[new_size];
    if (size >= new_size) {
        b[0] = buf[0];
        for (int i = 0; i < new_size; i++) {
            b[i] = buf[i];
        }
    }
    else {
        for (int i = 0; i < size; i++) {
            b[i] = buf[i];
        }
        for (int i = 0; i < new_size - size; i++) {
            b[size + i] = '1';
        }
    }
    for (int i = 0; i < new_size; i++) {
        std::cout << b[i] << ' ';
    }
    return b;
}

int main() {
    char* a = new char[10];
    int new_size = 0;
    std::cin >> new_size;

    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    resize(a, 10, new_size);
    delete[] a;
    return 0;
}   