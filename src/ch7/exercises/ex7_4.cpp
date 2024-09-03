#include <format>
#include <iostream>


int main() {
    constexpr int size{5};
    // a
    int values[size]{2, 4, 6, 8, 10};

    // b
    int *vPtr{nullptr};

    // c
    for (size_t i{0}; i < size; ++i) {
        std::cout << values[i] << " ";
    }
    std::cout << "\n";

    // d
    vPtr = values;
    std::cout << vPtr << "\n";
    vPtr = &values[0];
    std::cout << vPtr << "\n";

    // e
    for (int i{0}; i < size; ++i) {
        std::cout << *(vPtr + i) << " ";
    }
    std::cout << "\n";

    // f
    for (int i{0}; i < size; ++i) {
        std::cout << *(values + i) << " ";
    }
    std::cout << "\n";

    // g
    for (int i{0}; i < size; ++i) {
        std::cout << vPtr[i] << " ";
    }
    std::cout << "\n";

    // h
    std::cout << values[3] << "\n";
    std::cout << *(values + 3) << "\n";
    std::cout << *(vPtr + 3) << "\n";
    std::cout << vPtr[3] << "\n";

    vPtr = &values[4];
    std::cout << *vPtr << "\n";
    vPtr -= 4;
    std::cout << *vPtr << "\n";

    return 0;
}
