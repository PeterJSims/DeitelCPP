#include <format>
#include <iostream>
#include "rapidcsv.h"


void printTics(const int n) {
    for (int i{0}; i <= n; ++i) {
        std::cout << "-";
    }
    std::cout << "\n";
}

int main() {
    constexpr int ticCount{54};


    rapidcsv::Document document{"grades.csv"};
    std::vector first{document.GetColumn<std::string>("first")};
    std::vector last{document.GetColumn<std::string>("last")};
    std::vector exam1Grade{document.GetColumn<int>("exam1grade")};
    std::vector exam2Grade{document.GetColumn<int>("exam2grade")};
    std::vector exam3Grade{document.GetColumn<int>("exam3grade")};


    const size_t length{exam1Grade.size()};

    double exam1Total{0};
    double exam2Total{0};
    double exam3Total{0};


    std::cout << std::format("{:<24}{:<8}{:<8}{:<8}{:<8}\n", "Name", "First", "Second", "Third", "Average");

    printTics(ticCount);


    for (int i{0}; i < first.size(); ++i) {
        const int examOne{exam1Grade[i]};
        const int examTwo{exam2Grade[i]};
        const int examThree{exam3Grade[i]};
        exam1Total += examOne;
        exam2Total += examTwo;
        exam3Total += examThree;


        std::cout << std::format("{:<24}{:<8}{:<8}{:<8}{:<8.2f}\n",
                                 first[i] + " " + last[i],
                                 examOne, examTwo, examThree,
                                 (examOne + examTwo + examThree) / 3.0
        );
    }

    printTics(ticCount);
    std::cout << std::format("{:<24}{:<8.2f}{:<8.2f}{:<8.2f}\n", "Grade Average:",
                             exam1Total / length,
                             exam2Total / length,
                             exam3Total / length
    );

    return 0;
}
