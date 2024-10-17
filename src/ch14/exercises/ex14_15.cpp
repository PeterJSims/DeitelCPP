//
// Created by Peter Sims on 10/17/24.
//

#include <iostream>
#include <print>
#include <algorithm>
#include <iterator>
#include <ranges>


int main() {
    const std::ostream_iterator<int> output{std::cout, " "};

    int sum{};

    auto cubes{
        std::views::iota(1)
        | std::views::transform([&sum](const int x) {
            const int cube{x * x * x};
            sum += cube;
            return cube;
        })
        | std::views::take(9)
    };
    std::ranges::copy(cubes, output);
    std::println("\nSum of cubes: {}", sum);


    return 0;
}
