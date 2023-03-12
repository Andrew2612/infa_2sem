#include <iostream>

int main() 
{
    short int* array = new short int[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }
    
    for (int i = 0; i < 10; i++) {
        std::cout << array + i <<' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << *(array + i) <<' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            *(array + i) *= *(array + i);
        }
        std::cout << *(array + i) <<' ';
    }
    std::cout << std::endl;

    delete [] array;
    return 0;
}