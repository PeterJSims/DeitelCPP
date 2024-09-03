#include <format>
#include <iostream>
#include <random>


int main() {
    // a
    constexpr std::array<int, 10> ints{};
    constexpr int rawInts[10]{};
    for (const auto &num: ints) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    for (size_t i{0}; i < 10; ++i) {
        std::cout << rawInts[i] << " ";
    }
    std::cout << "\n\n";

    // b
    std::default_random_engine engine{};
    std::uniform_int_distribution<int> dist{1, 100};
    std::array<int, 15> bonuses{};
    for (auto &bonus: bonuses) {
        bonus = dist(engine);
    }

    for (const auto &bonus: bonuses) {
        std::cout << bonus << " ";
    }
    std::cout << "\n";

    for (auto &bonus: bonuses) {
        bonus += 1;
    }
    for (const auto &bonus: bonuses) {
        std::cout << bonus << " ";
    }
    std::cout << "\n";

    // c
    constexpr int count{12};
    std::array<double, count> monthlyTemperatures{};
    for (int i{0}; i < count; ++i) {
        std::cin >> monthlyTemperatures[i];
    }
    for (const auto &temp: monthlyTemperatures) {
        std::cout << temp << " ";
    }
    std::cout << "\n";


    // C++20 for-init
    for (constexpr std::array bestScores{99, 87, 78, 93, 83}; const auto &score: bestScores) {
        std::cout << score << " ";
    }
    return 0;
}
