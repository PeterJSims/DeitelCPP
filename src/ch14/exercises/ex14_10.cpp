//
// Created by Peter Sims on 10/17/24.
//

#include <iostream>
#include <print>
#include <algorithm>
#include <iterator>
#include <fstream>

int main() {
    if (std::ifstream input{"50ints.txt"}) {
        std::istream_iterator<int> istream{input};
        std::vector<int> ints{};

        std::ranges::copy(istream, std::istream_iterator<int>{}, std::back_inserter(ints));

        std::println("{:n}", ints);

    } else {
        std::println("File not found");
    }


    return 0;
}
