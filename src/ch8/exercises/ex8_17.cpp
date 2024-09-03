#include <format>
#include <iostream>
#include "rapidcsv.h"


int main() {
    rapidcsv::Document document{"grades.csv"};
    std::vector first{document.GetColumn<std::string>("first")};
    std::vector last{document.GetColumn<std::string>("last")};
    std::vector exam1Grade{document.GetColumn<int>("exam1grade")};
    std::vector exam2Grade{document.GetColumn<int>("exam2grade")};
    std::vector exam3Grade{document.GetColumn<int>("exam3grade")};


    std::cout << std::format("{:<24}{:<8}{:<8}{:<8}\n", "Name", "First", "Second", "Third");
    for (int i{0}; i < 45; ++i) {
        std::cout << "-";
    }
    std::cout << "\n";

    for (int i{0}; i < first.size(); ++i) {
        std::cout << std::format("{:<24}{:<8}{:<8}{:<8}\n",
                                 first[i] + " " + last[i], exam1Grade[i], exam2Grade[i], exam3Grade[i]);
    }
    return 0;
}
