#include <format>
#include <iostream>


int main() {
    for (int i{0}; i < CHAR_MAX; ++i) {
        std::cout << std::format("{}: {:c}\t", i, i);
        if (i % 5 == 0) {
            std::cout << "\n";
        }
    }
    return 0;
}
