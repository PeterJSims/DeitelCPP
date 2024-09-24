//
// Created by Peter Sims on 9/23/24.
//

#include <iostream>
#include <format>
#include "exercise_classes/integer_set.h"

int main() {
    IntegerSet set;
    set.insertElement(5);
    set.insertElement(45);
    set.insertElement(54);
    std::cout << set.toString() << "\n";
    std::cout << set.getSize() << "\n";
    set.deleteElement(45);
    std::cout << set.toString() << "\n";
    std::cout << set.getSize() << "\n";


    IntegerSet set2(set);
    set.insertElement(3);
    set2.insertElement(43);
    set2.insertElement(99);


    std::cout << set2.toString() << "\n";
    auto x = set + set2;
    std::cout << x.toString() << "\n";
    std::cout << x << "\n";
    std::cout << set2 << "\n";
    x = x - set2;
    std::cout << x << "\n";
    return 0;
}
