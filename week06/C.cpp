#include <iostream>
#include <string>

struct Time
{
    int hours, minutes, seconds;
};

int main() {
    Time current_time;
    std::cin >> current_time.hours >> current_time.minutes >> current_time.seconds;
    Time wait_for;
    std::cin >> wait_for.hours >> wait_for.minutes >> wait_for.seconds;

    Time para_finishing = {0,0,0};

    if (current_time.seconds + wait_for.seconds >= 60) {
        para_finishing.seconds = current_time.seconds + wait_for.seconds - 60;
        para_finishing.minutes++;
    } else {
        para_finishing.seconds = current_time.seconds + wait_for.seconds;
    }

    if (para_finishing.minutes + current_time.minutes + wait_for.minutes >= 60) {
        para_finishing.minutes += current_time.minutes + wait_for.minutes - 60;
        para_finishing.hours++;
    } else {
        para_finishing.minutes += current_time.minutes + wait_for.minutes;
    }

    if (para_finishing.hours + current_time.hours + wait_for.hours >= 24) {
        para_finishing.hours += current_time.hours + wait_for.hours - 24;
    } else {
        para_finishing.hours += current_time.hours + wait_for.hours;
    }

    std::cout <<  para_finishing.hours << ':' <<
    para_finishing.minutes << ':' << para_finishing.seconds 
    << std::endl;
}