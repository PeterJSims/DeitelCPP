//
// Created by Peter Sims on 9/23/24.
//

#include <iostream>
#include <format>
#include "exercise_classes/complex.h"

int main() {
    Complex complex{3.4, 2.1};
    Complex complex2{7.3};
    std::cout << complex << "\n";
    std::cout << complex2 << "\n";
    complex = complex + complex;
    std::cout << complex << "\n";
    auto complex3 = complex - complex2;
    std::cout << complex3 << "\n";
    complex3 = complex3 * complex;
    std::cout << complex3 << "\n";
    return 0;
}
