#include <format>
#include <iostream>
#include <numeric>
#include <ranges>

int main() {
    auto nums{std::views::iota(1, 11)};
    auto evens{
        nums |
        std::views::filter([](const auto &x) { return x % 2 == 0; })
    };
    auto triples{
        evens |
        std::views::transform([](const auto &x) { return x * 3; })
    };
    auto sum{std::accumulate(std::begin(triples), std::end(triples), 0)};

    for (const auto &c: triples) {
        std::cout << c << " ";
    }
    std::cout << "\n";
    std::cout << "Sum of triples of even numbers (1-10): " << sum;

    return 0;
}
