//
// Created by Peter Sims on 9/28/24.
//

#include <iostream>
#include <format>


void errorThrowing(int n) {
    if (n < 0) {
        throw std::invalid_argument("Bad argument");
    }
}

int main() {
    try {
        errorThrowing(-3);
    } catch (...) {
        std::cout << "Caught\n";
        throw;  // rethrows caught error
    }
    return 0;
}
