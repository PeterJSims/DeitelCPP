#include <format>
#include <iostream>


int main() {
    long value1{200000};
    long value2{};

    // a
    long *longPtr{nullptr};

    // b
    longPtr = &value1;

    // c
    std::cout << *longPtr << "\n";

    // d
    value2 = *longPtr;

    // e
    std::cout << value2 << "\n";

    // f
    std::cout << &value1 << "\n";

    // g
    std::cout << longPtr << "\n";
    return 0;
}
