#include <iostream>

int main() 
{
    int x = -1;
    int counter = 0;
    int* ptr = new int;

    while (true) {
        std::cin >> x;
        if (x == 0) {
            break;
        }
        *(ptr + counter) = x;
        counter++;
    }

    int* array = new int[counter];
    for (int i = 0; i < counter; i++) {
        array[i] = *(ptr + i);
    }

    for (int i = 1; i < counter; i++) {
        std::cout << - array[i] + array[i-1] << ' ';
    }
    std::cout << std::endl;

    return 0;
}