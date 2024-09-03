#include <format>
#include <iostream>
#include <ranges>

int main() {
    // std::array<int, 15> numbers{};
    // std::iota(numbers.begin(), numbers.end(), 1);
    auto result{
        std::views::iota(1, 16) |
        std::views::filter([](const auto &x) { return x % 2 == 0; })
        | std::views::transform([](const auto &x) { return x * x; })
        | std::views::filter([](const auto &x) { return x % 2 == 0; })
        | std::views::transform([](const auto &x) { return x * x; })
    };

    for (const auto number: result) {
        std::cout << number << " ";
    }
    return 0;
}
