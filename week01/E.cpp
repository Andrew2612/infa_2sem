#include <iostream>
#include <cmath>

int NOD_finder(int n, int m) { /// Находим НОД
    int k = 1;
    while (k != 0) {
            k = n % m;
            n = m;
            m = k;
        }
    return n;
}

int main() {
    int n = 0, m = 0;
    std::cin >> n >> m;

    if (n == 0 or m == 0)
        std::cout << "\n" << std::endl;
    else {
        if (n < 0)
            n = -n;
        if (m < 0)
            m = -m;

        int l = 0;

        l = NOD_finder(n, m);
        std::cout<< n*m/l << std::endl;
    }
    
    return 0;
}
