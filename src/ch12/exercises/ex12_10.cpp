//
// Created by Peter Sims on 9/28/24.
//

#include <iostream>
#include <format>

int simpleFunction(int n) {
    return n * n;
}

int main() {
    auto x{simpleFunction(5)};
    throw; // arbitrarily terminates here
    return 0;
}
