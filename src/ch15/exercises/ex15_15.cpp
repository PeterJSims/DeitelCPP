//
// Created by Peter Sims on 10/29/24.
//

#include <iostream>
#include <print>
#include <concepts>

//Concept enforced
template <typename T, typename Container> requires std::ranges::range<Container>
T sumRange(const Container& container) {
    T sum = T{};
    for (const auto& item : container) {
        sum += item;
    }
    return sum;
}

int main() {
    const std::vector ints{1, 2, 3, 4};
    const std::vector doubles{1.1, 2.2, 3.3, 4.4};
    const std::vector strings{"hi,\t", "hello\t", "there"};

    std::println("{}", sumRange<int>(ints));
    std::println("{}", sumRange<double>(doubles));
    std::println("{}", sumRange<std::string>(strings));


    return 0;
}
