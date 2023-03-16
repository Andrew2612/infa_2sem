#include <iostream>
#include <string>

struct Students
{
    std::string name;
    float result;
};

int main() {
    float M = 0;
    struct Students students[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> students[i].name >> students[i].result;
    }
    std::cin >> M;
    for (int i = 0; i < 10; i++) {
        if (students[i].result > M) {
            std::cout << students[i].name << ' ';
        }
    }
    std::cout << std::endl;
}