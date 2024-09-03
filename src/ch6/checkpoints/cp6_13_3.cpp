#include <format>
#include <iostream>


int main() {
    // std::array arr{std::array<int, 3>{}, std::array<int, 3>{}, std::array<int, 3>{}};
    std::array<std::array<int, 3>, 3> arr{};
    for (int row{0}; row < arr.size(); ++row) {
        for (int col{0}; col < arr.at(row).size(); ++col) {
            arr.at(row).at(col) = row + col;
        }
    }
    for (size_t row{0}; row < arr.size(); ++row) {
        for (size_t col{0}; col < arr.at(row).size(); ++col) {
            std::cout << arr.at(row).at(col) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
