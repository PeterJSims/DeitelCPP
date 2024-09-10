//
// Created by Peter Sims on 9/8/24.
//

#include <iostream>
#include "exercise_classes/Time.h"
// see Time.h/Time.cpp for tick() implementation
int main() {
    Time t{0, 0, 59};
    std::cout << t.to12HourString() << "\n";
    t.tick();
    std::cout << t.to12HourString() << "\n";
    t = Time{0, 59, 59};
    std::cout << t.to12HourString() << "\n";
    t.tick();
    std::cout << t.to12HourString() << "\n";
    t = Time{23, 59, 59};
    std::cout << t.to12HourString() << "\n";
    t.tick();
    std::cout << t.to12HourString() << "\n";
}
