#include <format>
#include <iostream>
#include <regex>


int main() {
    const std::regex whitespace(R"(\s)");
    const std::regex digit(R"(\d)");
    const std::regex letter(R"(\w)");

    std::string input;
    while (getline(std::cin, input)) {
        int whiteSpaces{0};
        int digits{0};
        int nonDigits{0};
        int letters{0};

        for (const char& c : input) {
            std::string current(1, c);
            if (std::regex_match(current, whitespace)) {
                ++whiteSpaces;
            }
            if (std::regex_match(current, digit)) {
                ++digits;
            }
            if (std::regex_match(current, letter)) {
                ++letters;
            }
        }
        nonDigits = input.size() - digits;

        std::cout << std::format("Whitespaces: {} | Digits: {} | Nondigits: {} | Letters: {}\n", whiteSpaces, digits,
                                 nonDigits, letters);
    }
    return 0;
}
