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
    std::cout << set.toString() << "\n";
    set.deleteElement(45);
    std::cout << set.toString() << "\n";

    IntegerSet set2(set);
    std::cout << set2.toString() << "\n";

    std::cout << set.isEqualTo(set2);
    return 0;
}
