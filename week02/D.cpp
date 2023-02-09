#include <iostream>

int recursive_power(int base, int power) {
    if (power != 0) {
        return base * recursive_power(base, power - 1);
    }
}


int main() {
    int base = 0;
    int power = 0;
    std::cin >> base >> power;

    if (power == 0) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << recursive_power(base, power - 1) << std::endl;  
    } 
    return 0;
}