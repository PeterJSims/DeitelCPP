#include <format>
#include <iostream>


int main() {
    int *zPtr{nullptr};
    int number{0};
    int z[5]{1, 2, 3, 4, 5};
    // a
    // ++zPtr --> cannot perform pointer arithmetic on null pointer

    // b
    // number = zPtr; --> number type != zPtr type

    // c
    // number = *zPtr[2]; --> trying to dereference an integer, not an integer pointer

    // d
    for (size_t i{0}; i <= 3; ++i) {
        // std::cout << zPtr[i] << "\n"; --> needs to be z, not zPtr
        std::cout << z[i] << "\n";
    }

    // e
    // ++z; --> z is an array, not an integer/integer pointer


    return 0;
}
