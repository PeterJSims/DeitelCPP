//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <print>

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

void printFactorizations(int i) {
    auto idx{2};
    while (i > 1) {
        while(i % idx == 0) {
            std::cout << idx << " ";
            i /= idx;
        }
        ++idx;
    }
    std::cout << '\n';
}

int main() {

    const std::string prompt{"Enter a number to see if it is prime ('q' to quit): "};
    const auto primes{generatePrimes()};

    std::print("{}", prompt);
    int request{};
    while (std::cin >> request) {
        if (request < 2 || request > primes.size()) {
            std::println("Bad request");
        } else {
            auto result{primes[request] ? "is" : "is not"};
            std::println("{} {} prime", request, result);
            if(!primes[request]) {
                std::print("Prime factorization of {}: ", request);
                printFactorizations(request);
            }
        }
        std::print("\n{}", prompt);
    }


    return 0;
}
