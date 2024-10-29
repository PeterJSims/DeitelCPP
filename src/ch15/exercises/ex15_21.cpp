//
// Created by Peter Sims on 10/29/24.
//
#include <iostream>
#include <print>
#include <concepts>

std::string operator*(const std::string& str, const int count) {
    std::string returnString{};
    for (int i{0}; i < count; ++i) {
        returnString += str;
    }
    return returnString;
}

template <typename T, typename U>
concept Product = requires(T t, U u) { t * u; };

template <typename T, typename U>
auto multiply(T first, U second) requires Product<T, U> {
    return first * second;
}


int main() {
    const std::string s{"ha"};
    std::println("{}", (s * 4));
    std::println("{}", multiply(s, 4));


    return 0;
}
