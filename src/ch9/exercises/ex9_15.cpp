//
// Created by Peter Sims on 9/8/24.
//
#include "exercise_classes/circle.h"
#include "exercise_classes/point.h"
#include <iostream>

int main() {
    Point p{3, 2};
    Circle c{p, 3};
    std::cout << c.toString() << std::endl;
    c.move(12, 5);
    std::cout << c.toString();
}
