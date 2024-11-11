//
// Created by Peter Sims on 11/11/24.
//

#include <iostream>
#include <format>


int main() {
    for (int number; std::cin >> number;) {
        std::cout << std::format("Dec: {:d} Oct: {:#o} Hex: {:#x} \n", number, number, number);
    }
    return 0;
}
