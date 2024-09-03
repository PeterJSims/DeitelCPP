#include <format>
#include <iostream>


int main() {
    constexpr int height{2};
    constexpr int width{5};
    std::array<std::array<int, width>, height> t{};

    for (auto row: t) {
        for (const auto value: row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    std::cout << std::format("{:<5}{:<10}\n", "Row", "Value");
    for (size_t i{0}; i < t.size(); ++i) {
        for (size_t j{0}; j < t.at(i).size(); ++j) {
            std::cout << std::format("{:<5}{:<10}\n", i, t[i][j]);
        }
    }

    return 0;
}
