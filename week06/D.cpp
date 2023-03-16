#include <iostream>
#include <string>


void swap(int &lha, int  &rha) {
    int tmp = lha;
    lha = rha;
    rha = tmp;
}

struct Street
{
    int beginningX;
    int beginningY;
    int endingX;
    int endingY;
};


int main() {
    Street street1;
    std::cin >> street1.beginningX >> street1.beginningY >>
    street1.endingX >> street1.endingY;
    if (street1.beginningX > street1.endingX) {
        swap(street1.beginningX, street1.endingX);
    }
    if (street1.beginningY > street1.endingY) {
        swap(street1.beginningY, street1.endingY);
    }

    Street street2;
    std::cin >> street2.beginningX >> street2.beginningY >>
    street2.endingX >> street2.endingY;
    if (street2.beginningX > street2.endingX) {
        swap(street2.beginningX, street2.endingX);
    }
    if (street2.beginningY > street2.endingY) {
        swap(street2.beginningY, street2.endingY);
    }


    if (street1.beginningX <= street2.endingX && 
    street1.endingX >= street2.beginningX &&
    street1.beginningY <= street2.endingY && 
    street1.endingY >= street2.beginningY) {
        std::cout << "NO";
    } else {
        std::cout << "YES";
    }
    std::cout << std::endl;
    return 0;
}