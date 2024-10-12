//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <print>

inline std::bitset<1024> generatePrimes() {
    constexpr int size{1024};

    std::bitset<size> sieve{};
    for (int i{0}; i < size; ++i) {
        sieve.set(i);
    }

    for (int i{2}; i < sqrt(size); ++i) {
        if (sieve[i]) {
            int j{i * 2};
            while (j < size) {
                sieve.reset(j);
                j += i;
            }
        }
    }
    return sieve;
}

int main() {
    const std::string prompt{"Enter a number to see if it is prime ('q' to quit):"};

    auto primes{generatePrimes()};
    // for (int i{2}; i < primes.size(); ++i) {
    //     if (primes[i]) {
    //         std::println("{}", i);
    //     }
    // }
    //
    std::println("{}", prompt);
    int request{};
    while (std::cin >> request) {
        if (request < 2 || request > primes.size()) {
            std::println("Bad request");
        } else {
            auto result{primes[request] ? "is" : "is not"};
            std::println("{} {} prime", request, result);
        }
        std::println("{}", prompt);
    }

    return 0;
}
