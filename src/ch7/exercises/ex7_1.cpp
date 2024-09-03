#include <format>
#include <iostream>


int main() {
    constexpr int size{10};
    // a
    double numbers[size]{0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    // b
    constexpr double tempDouble{1.25};
    const double *nPtr{&tempDouble};

    // c
    std::cout << std::format("Array contents: ");
    for (int i{0}; i < size; ++i) {
        std::cout << std::format("{:.1f} ", numbers[i]);
    }
    std::cout << "\n";

    // d
    nPtr = numbers;
    // std::cout << std::format("nPtr memory address: {}", nPtr);
    std::cout << nPtr << "\n";
    nPtr = &numbers[0];
    // std::cout << std::format("nPtr memory address: {}", nPtr);
    std::cout << nPtr << "\n";

    // e
    for (int i{0}; i < size; ++i) {
        std::cout << *(nPtr + i)  << " ";
    }
    std::cout << "\n";

    // f
    for (int i{0}; i < size; ++i) {
        std::cout << *(numbers + i) << " ";
    }
    std::cout << "\n";

    // g
    for (int i{0}; i < size; ++i) {
        std::cout << nPtr[i]  << " ";
    }
    std::cout << "\n";

    // h
    std::cout << numbers[2] << "\n";
    std::cout << *(numbers + 2) << "\n";
    std::cout << nPtr[2] << "\n";
    std::cout << *(nPtr + 2) << "\n";

    // i
    std::cout << *(nPtr + 8) << "\n";

    // j
    nPtr = &numbers[5];
    std::cout << *(nPtr -= 4) << "\n";
    std::cout << *nPtr << "\n";


    return 0;
}
