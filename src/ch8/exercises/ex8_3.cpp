#include <format>
#include <iostream>


int main() {
    std::string input{};
    while (std::cin >> input) {
        for (int i = input.size() - 1; i >= 0; --i) {
            if (const char c{input.at(i)}; std::isupper(c)) {
                std::cout << static_cast<char>(tolower(c));
            }
            else {
                std::cout << static_cast<char>(toupper(c));
            }
        }
        std::cout << "\n";
    }
    return 0;
}
