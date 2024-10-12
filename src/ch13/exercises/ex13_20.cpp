//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <print>


int main() {
    std::vector<int> positiveNumbers{};
    // Exercise requested sentinel controlled reading of integers
    int i{};
    std::cin >> i;

    int sum{};

    while (i >= 0) {
        positiveNumbers.push_back(i);
        sum += i;

        std::cin >> i;
    }
    auto min{*std::min_element(positiveNumbers.begin(), positiveNumbers.end())};
    auto max{*std::max_element(positiveNumbers.begin(), positiveNumbers.end())};

    std::println("Min: {}", min);
    std::println("Max: {}", max);
    std::println("Range: {}", max - min);
    std::println("Count: {}", positiveNumbers.size());
    std::println("Sum: {}", sum);


    return 0;
}
