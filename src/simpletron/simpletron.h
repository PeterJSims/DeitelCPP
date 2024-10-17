//
// Created by Peter Sims on 10/12/24.
//

#ifndef SIMPLETRON_H
#define SIMPLETRON_H
#include <vector>

enum class OperationCodes {
    // Input/output operations:
    read = 10, write = 11,
    // Load/store operations:
    load = 20, store = 21,
    // Arithmetic operations:
    add = 30, subtract = 31, divide = 32, multiply = 33,
    // Transfer-of-control operations
    branch = 40, branchNeg = 41, branchZero = 42, halt = 43
};

class Simpletron {
    std::array<int, 100> memory{};
};


#endif //SIMPLETRON_H
