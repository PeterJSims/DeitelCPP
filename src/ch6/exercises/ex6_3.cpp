#include <format>
#include <iostream>
#include <random>


int main() {
    // a
    constexpr std::array alphabet{
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    };
    std::cout << alphabet[5] << "\n";

    // b
    std::array<double, 10> grades{0.0};
    grades[3] = 85.6;
    for (const auto &grade: grades) std::cout << grade << " ";
    std::cout << "\n";

    // c
    std::array<int, 5> intArr{8};
    for (auto &value: intArr) {
        value = 8;
    }
    for (const auto value: intArr) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    // d
    std::default_random_engine engine{};
    std::uniform_real_distribution<double> numDistribution{0, 100.0};
    std::array<double, 100> temps{};
    for (size_t i{0}; i < temps.size(); ++i) {
        temps[i] = numDistribution(engine);
    }
    for(size_t i{0}; i < temps.size(); ++i) {
        std::cout << temps[i] << " ";

    }
    std::cout << "\n";
    const auto avg{std::accumulate(temps.begin(), temps.end(), 0.0) / temps.size()};
    std::cout << avg << "\n";

    // e
    std::array<double, 99> values{};
    for (size_t i{0}; i < values.size(); ++i) {
        values[i] = numDistribution(engine);
    }
    double min{INT_MAX};
    double max{INT_MIN};
    for(const auto& value: values) {
        if (value < min) {
            min = value;
        }
        if(value > max) {
            max = value;
        }
    }
    std::cout << std::format("Min: {}\nMax: {}", min, max);




    return 0;
}
