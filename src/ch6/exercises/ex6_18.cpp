#include <algorithm>
#include <format>
#include <iostream>


int main() {
    std::string s{"bathe"};

    do {
        std::cout << s.substr(0, 3) << '\n';
    } while (std::next_permutation(s.begin(), s.end()));
    std::cout << s.substr(0, 3) << '\n';
    return 0;
}
