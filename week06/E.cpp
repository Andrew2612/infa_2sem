#include <iostream>
#include <string>

void swap(int &lha, int  &rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}

struct Key
{
    int beginning;
    int ending;
};

bool finder(Key (&keys)[], int N) {
    if (N == 1) {
        return true;
    }

    for (int i = 1; i < N; i++) {
        if (keys[i-1].beginning > keys[i].ending ||
        keys[i-1].ending < keys[i].beginning) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;
    struct Key keys[N];
    for (int i = 0; i < N; i++) {
        std::cin >> keys[i].beginning >> keys[i].ending;
        if (keys[i].beginning > keys[i].ending) {
            swap(keys[i].beginning, keys[i].ending);
        }
    }

    if (finder(keys, N)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;
    return 0;
}