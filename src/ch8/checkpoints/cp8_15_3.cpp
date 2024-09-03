#include <format>
#include <iostream>
#include <fstream>


int main() {
    int bits;
    std::cout << "Number of bits to move forward: ";
    std::cin >> bits;
    if (std::ifstream input{"file.txt"}) {
        input.seekg(bits, std::ios::cur);
    }
    else {
        std::cerr << "Error opening file";
    }
    return 0;
}
