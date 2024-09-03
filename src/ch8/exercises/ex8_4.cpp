#include <format>
#include <iostream>


bool isPalindrome(const std::string& s) {
    auto l{0};
    auto r{s.length() - 1};
    while (l <= r) {
        while (!isalpha(s[l])) {
            ++l;
        }
        while (!isalpha(s[r])) {
            --r;
        }
        if (s[l] != s[r]) {
            return false;
        }
        ++l;
        --r;
    }
    return true;
}

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {
        std::cout << std::format("{}\n", isPalindrome(input));
    }
    return 0;
}
