#include <iostream>
#include <string>


struct Atom
{
    std::string name;
    int A;
    int Z;
};


int main() {
    int N = 0;
    std::cin >> N;
    struct Atom atoms[N];
    for (int i = 0; i < N; i++) {
        std::cin >> atoms[i].name >> atoms[i].A >> atoms[i].Z;
    }

    int M = 0;
    std::cin >> M;
    for (int i = 0; i < M; i++) {
        std::string atom_name;
        std::string reaction;
        std::cin >> atom_name >> reaction;

        Atom from;
        for (int j = 0; j < N; j++) {
            if (atoms[j].name == atom_name) {
                from = atoms[j];
                break;
            }
        }

        if (reaction == "alpha") {
            from.A -= 4;
            from.Z -=2;
        }
        if (reaction == "beta+") {
            from.Z -= 1;
        }
        if (reaction == "beta-") {
            from.Z += 1;
        }

        bool is_found = false;
        for (int j = 0; j < N; j++) {
            if (atoms[j].A == from.A && atoms[j].Z == from.Z) {
                is_found = true;
                std::cout << atoms[j].name << ' ';
            }
        }
        if (!is_found) {
            std::cout << "NO DATA" << ' ';
        }
        
    }
    std::cout << std::endl;
}