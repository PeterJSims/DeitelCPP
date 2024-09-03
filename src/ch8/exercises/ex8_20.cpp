#include <format>
#include <iostream>
#include <fstream>

int main() {
    if (std::ofstream output{"datasize.txt"}) {
        // std::cout << std::format("{:<25}{:<2}\n", "Type", "Size in Bytes");
        output << std::format("{:<25}{:>2}\n", "char", sizeof(char));
        output << std::format("{:<25}{:>2}\n", "unsigned char", sizeof(unsigned char));
        output << std::format("{:<25}{:>2}\n", "short int", sizeof(short int));
        output << std::format("{:<25}{:>2}\n", "unsigned short int", sizeof(unsigned short int));
        output << std::format("{:<25}{:>2}\n", "int", sizeof(int));
        output << std::format("{:<25}{:>2}\n", "unsigned int", sizeof(unsigned int));
        output << std::format("{:<25}{:>2}\n", "long int", sizeof(long int));
        output << std::format("{:<25}{:>2}\n", "unsigned long int", sizeof(unsigned long int));
        output << std::format("{:<25}{:>2}\n", "long long int", sizeof(long long int));
        output << std::format("{:<25}{:>2}\n", "unsigned long long int", sizeof(unsigned long long int));
        output << std::format("{:<25}{:>2}\n", "float", sizeof(float));
        output << std::format("{:<25}{:>2}\n", "double", sizeof(double));
        output << std::format("{:<25}{:>2}\n", "long double ", sizeof(long double));
    } else {
        std::cerr << "Error writing file";
    }

    return 0;
}
