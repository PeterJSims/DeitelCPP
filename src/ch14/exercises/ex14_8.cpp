//
// Created by Peter Sims on 10/16/24.
//

#include <iostream>
#include <print>
#include <algorithm>
#include <iterator>
// 2 9 5 0 -3 6 5 12 9 14 -7 19 4 -4 19 17 2 21 34 11
int main() {
    std::ostream_iterator<int> ostream{std::cout, " "};

    constexpr int size{20};
    std::array<int, size> ints{};
    for (int i{0}; i < size; ++i) {
        std::cin >> ints[i];
    }

    std::vector<int> intsVector{};
    for (int i : ints) intsVector.push_back(i);

    std::ranges::sort(ints);
    auto [first, last]{std::ranges::unique(ints)};
    std::copy(ints.begin(), first, ostream);
    std::cout << '\n';

    std::ranges::sort(intsVector);
    std::println("{:n}", intsVector);
    auto [firstVector, lastVector]{std::ranges::unique(intsVector)};
    intsVector.erase(firstVector, lastVector);
    std::println("{:n}", intsVector);


    return 0;
}
