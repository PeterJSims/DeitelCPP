#include <format>
#include <iostream>
#include <fstream>


int main() {
    if (std::ofstream output{"grades.txt"}) {
        int num;
        while (std::cin >> num) {
            output << num << " ";
        }
    } else {
        std::cerr << "Could not create file";
    }
    return 0;
}
