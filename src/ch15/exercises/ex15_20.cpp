//
// Created by Peter Sims on 10/29/24.
//

#include <iostream>
#include <print>


std::string operator*(const std::string& str, const int count) {
    std::string returnString{};
    for (int i{0}; i < count; ++i) {
        returnString += str;
    }
    return returnString;
}

template <typename T, typename U>
auto multiply(T first, U second) { return first * second; }


int main() {
    std::string s{"ha"};
    std::println("{}", (s * 4));
    std::println("{}", multiply(s, 4));


    return 0;
}
