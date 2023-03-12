#include <iostream>

int main() 
{
    double* ptr = new double;
    *ptr = 5;
    std::cout << ptr << ' ' << *ptr << std::endl;
    std::cout << ptr - 3 << ' ' << *(ptr-3) << std::endl;
    std::cout << ptr + 5 << ' ' << *(ptr+5) << std::endl;

    delete ptr;
    return 0;
}