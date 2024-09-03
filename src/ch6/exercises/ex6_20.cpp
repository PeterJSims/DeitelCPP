#include <format>
#include <iostream>
#include <ranges>


int main() {
    auto nums{std::views::iota(1, 6)};
    const auto cubes{
        nums |
        std::views::transform([](const auto &x) { return x * x * x; })
    };

    for (const auto &c: cubes) {
        std::cout << c << " ";
    }

    return 0;
}
