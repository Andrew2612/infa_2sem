#include <iostream>
#include <cmath>

int main() {
    int n = 0, m = 0, k = 1;
    std::cin >> n >> m;

    if (n == 0 || m == 0)
        std::cout << "\n" << std::endl;
    else {
        if (n < 0)
            n = -n;
        if (m < 0)
            m = -m;

        while (k != 0) {
            k = n % m;
            n = m;
            m = k;
        }
        std::cout<< n << std::endl;
    }
    
    return 0;
}
