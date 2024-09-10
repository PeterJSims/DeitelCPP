//
// Created by Peter Sims on 9/8/24.
//
#include <iostream>
#include "exercise_classes/complex.h"

int main() {
    Complex one{3, 5};
    Complex two{3, -5};
    std::cout << one.toString() << std::endl;
    std::cout << one << std::endl;
    std::cout << two<< std::endl;
}
