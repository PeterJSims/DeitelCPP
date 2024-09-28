//
// Created by Peter Sims on 9/28/24.
//

#include <iostream>
#include <format>


void errorThrowing(int n) {
    if (n < 0) {
        throw std::underflow_error("Underflow");
    }
}

int main() {
    try {
        errorThrowing(-3);
    } catch (std::overflow_error& e) {
        std::cout << "Caught";
    }
    return 0;
}
