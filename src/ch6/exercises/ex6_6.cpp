#include <format>
#include <iostream>


void printSalaryBarPlot(const std::array<int, 9> &intArray);

std::string getRangeString(int r);

int calculateSalaryPositionBySales(const int &sales);


int main() {
    std::array<int, 9> rangeCounts{};

    int sales;
    while (std::cin >> sales) {
        ++rangeCounts.at(calculateSalaryPositionBySales(sales));
    }
    printSalaryBarPlot(rangeCounts);
    return 0;
}


void printSalaryBarPlot(const std::array<int, 9> &intArray) {
    std::cout << std::format("{:>12}\t\t{}\n", "Range", "Count");
    for (size_t i{0}; i < intArray.size(); ++i) {
        std::cout << std::format("{:>15}:\t", getRangeString(i));

        for (int c{0}; c < intArray.at(i); ++c) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

std::string getRangeString(const int r) {
    if (r >= 8) {
        return "$1000 and over";
    }
    int start{r * 100 + 200};
    int stop{r * 100 + 299};

    return std::format("${}-{}", start, stop);
}

int calculateSalaryPositionBySales(const int &sales) {
    constexpr int baseSalary{200};
    int position{0};

    if (const int salary{baseSalary + static_cast<int>(sales * 0.09)}; salary < 300) {
        position = 0;
    } else if (salary < 400) {
        position = 1;
    } else if (salary < 500) {
        position = 2;
    } else if (salary < 600) {
        position = 3;
    } else if (salary < 700) {
        position = 4;
    } else if (salary < 800) {
        position = 5;
    } else if (salary < 900) {
        position = 6;
    } else if (salary < 1000) {
        position = 7;
    } else {
        position = 8;
    }
    return position;
}
