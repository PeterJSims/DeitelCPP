//
// Created by Peter Sims on 9/28/24.
//

#include <iostream>
#include <format>

class DerivedException : public std::runtime_error {
public:
    explicit DerivedException() : std::runtime_error("Bad argument") {
    }
};

double divide10ByN(int n) {
    if (n == 0) {
        std::cout << "DerivedException Caught\n";
        throw DerivedException();
    }
    return 10.0 / n;
}

int main() {
    try {
        auto x{divide10ByN(0)};

    } catch (std::runtime_error& e) {
        std::cout << "Caught DerivedException from runtime_error catch statement";
    }
    return 0;
}
