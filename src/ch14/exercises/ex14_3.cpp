//
// Created by Peter Sims on 10/16/24.
//

#include <iostream>
#include <print>
#include <algorithm>
#include <numeric>

inline int nextInt() {
    static int x{0};
    return x++;
}

inline bool startsWithBL(std::string str) {
    return str.starts_with("bl") || str.starts_with("BL");
}

inline bool greaterThan100(int x) { return x > 100; }


int main() {
    // a
    std::array<std::string, 5> stringArray{};
    std::ranges::fill(stringArray, "hello");
    std::println("{:n}", stringArray);

    // b
    std::array<int, 10> intArray{};
    std::ranges::generate(intArray, nextInt);
    std::println("{:n}", intArray);

    // c
    std::string stringA{"one"};
    std::string stringB{"tone"};
    bool result{std::ranges::equal(stringA, stringB)};
    std::println("{}", result);

    // d
    // note: without explicit typing, the compiler assumes these are char* and cannot do many of the algorithms
    const std::vector<std::string> originalColors{"red", "orange", "blue", "yellow"};
    std::vector colors{originalColors};
    auto newEnd{std::ranges::remove_if(colors, startsWithBL)};

    // e
    std::array values{1, 300, 29, 45, -3, 500};
    std::ranges::replace_if(values, greaterThan100, 0);
    std::println("{}", values);

    // f
    std::array temperatures{32.18, 0.52, 39.431, 54.121, -3.1};
    auto minMaxResult{std::ranges::minmax_element(temperatures)};
    std::println("{}, {}", *minMaxResult.min, *minMaxResult.max);

    // g
    std::vector<std::string> colorsToSort{originalColors};
    std::println("{:n}", colorsToSort);
    std::ranges::sort(colorsToSort);
    std::println("{:n}", colorsToSort);

    // h
    std::vector<std::string> colorsToReverse{colorsToSort};
    std::ranges::reverse(colorsToReverse);
    std::println("{:n}", colorsToReverse);

    // i
    std::array values1{1, 3, 5, 7, 9};
    std::array values2{2, 4, 6, 8, 10};
    std::array<int, values1.size() + values2.size()> resultArray{};

    std::ranges::merge(values1, values2, resultArray.begin());
    std::println("{:n}", resultArray);

    // j
    auto squareInt{[](const int x)-> int { return x * x; }};
    return 0;
}
