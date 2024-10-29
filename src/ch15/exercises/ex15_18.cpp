//
// Created by Peter Sims on 10/29/24.
//

#include <iostream>
#include <print>
#include <list>
#include <concepts>

auto customDistance(std::input_iterator auto begin, std::input_iterator auto end) {
    std::cout << "Called customDistance with input iterators\n";
    std::ptrdiff_t count{0};

    for (auto& iter{begin}; iter != end; ++iter) {
        ++count;
    }

    return count;
}

auto customDistance(std::random_access_iterator auto begin, std::random_access_iterator auto end) {
    std::cout << "Called customDistance with random-access iterators\n";
    return end - begin; // returns a std::ptrdiff_t value
}

int main() {
    std::array ints1{1, 2, 3, 4, 5}; // has random-access iterators
    std::list ints2{1, 2, 3}; // has bidirectional iterators

    auto result1{customDistance(ints1.begin(), ints1.end())};
    std::cout << "ints1 number of elements: " << result1 << "\n";
    auto result2{customDistance(ints2.begin(), ints2.end())};
    std::cout << "ints2 number of elements: " << result2 << "\n";
}
