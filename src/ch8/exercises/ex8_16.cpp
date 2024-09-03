#include <format>
#include <iostream>
#include <fstream>


int main() {
    int total{0};
    double count{0.0};

    if (std::ifstream input{"grades.txt"}) {
        int num;
        while (input >> num) {
            std::cout << num << "\n";
            total += num;
            ++count;
        }

        std::cout << std::format("Total: {} | Avg: {:.2f}", total, total / count);


    } else {
        std::cerr << "Could not create file";
    }
    return 0;
}
