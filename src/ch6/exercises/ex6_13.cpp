#include <iostream>
#include <array>


constexpr size_t arraySize{10};

int whatIsThis(const std::array<int, arraySize> &, size_t);

int main() {
    constexpr std::array a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int result{whatIsThis(a, arraySize)};

    std::cout << "Result is " << result << "\n";
    return 0;
}

int whatIsThis(const std::array<int, arraySize> &b, const size_t size) {
    if (size == 1) {
        return b[0];
    }
    return b[size - 1] + whatIsThis(b, size - 1);
}
