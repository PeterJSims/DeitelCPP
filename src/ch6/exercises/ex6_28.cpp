//
// Created by Peter Sims on 10/12/24.
//

#include <print>

int main() {
    constexpr int size{1000};

    std::array<bool, size> sieve{};
    for (bool& value : sieve) {
        value = true;
    }

    for (int i{2}; i < sqrt(size); ++i) {
        if (sieve[i]) {
            int j{i * 2};
            while (j < size) {
                sieve[j] = false;
                j += i;
            }
        }
    }

    for (int i{2}; i < size; ++i) {
        if (sieve[i]) {
            std::println("{}", i);
        }
    }

    return 0;
}
