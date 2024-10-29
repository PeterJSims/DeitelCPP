//
// Created by Peter Sims on 10/29/24.
//

#include <iostream>
#include <print>

// Would not take all types -- is there a way to take strings without previous exercise's steps?
auto sumRange(const auto& range) {
    auto sum{0};
    for (const auto&  item : range) {
        sum += item;
    }
    return sum;
}

int main() {
    const std::vector ints{1, 2, 3, 4};
    const std::vector doubles{1.1, 2.2, 3.3, 4.4};
    const std::vector strings{"hi,\t", "hello\t", "there"};

    std::println("{}", sumRange(ints));
    std::println("{}", sumRange(doubles));
    // std::println("{}", sumRange(strings));
    return 0;
}
