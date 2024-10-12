//
// Created by Peter Sims on 10/12/24.
//

#include <print>
#include <unordered_map>
#include <list>

int main() {
    std::unordered_map<std::string, std::list<int>> gradeBook{};
    gradeBook["Pantipa"] = {97, 91, 92};
    gradeBook["Azizi"] = {91, 89, 82};
    gradeBook["Eduardo"] = {83, 95, 79};
    gradeBook["Susan"] = {92, 85, 100};

    double classTotal{};
    for (const auto& [name, grades] : gradeBook) {
        double total{0.0};
        for (const int grade : grades) { total += grade; }
        double avg{total / grades.size()};
        std::println("Average for {} is {:.2f}", name, avg);

        classTotal += avg;
    }

    double classAvg{classTotal / gradeBook.size()};
    std::println("Class's average is: {:.2f}", classAvg);

    return 0;
}
