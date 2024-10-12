//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <print>

template <typename T>
bool palindrome(std::vector<T> vec) {
    auto l{vec.begin()};
    auto r{vec.end() - 1};
    while (l != r) {
        if (*l != *r) {
            return false;
        }
        ++l;
        --r;
    }

    return true;
}

int main() {
    // std::vector<int> nums{};
    const std::vector nums{1, 2, 3, 2, 1};
    const std::vector nums2{1, 2, 3, 2, 2, 1};
    const std::vector nums3{0};
    std::println("{}", palindrome(nums));
    std::println("{}", palindrome(nums2));
    std::println("{}", palindrome(nums3));
    const std::vector chars{'a', 'b', 'c', 'b', 'a'};
    const std::vector chars2{'a', 'c', 'b', 'a'};
    const std::vector chars3{'a', 'b'};
    std::println("{}", palindrome(chars));
    std::println("{}", palindrome(chars2));
    std::println("{}", palindrome(chars3));
    return 0;
}
