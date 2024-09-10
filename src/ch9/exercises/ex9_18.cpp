//
// Created by Peter Sims on 9/9/24.
//
#include <iostream>
#include <format>

#include "exercise_classes/date.h"

// date.h for implementation of date increment
int main() {
    try {
        Date d1{0, 2, 3};
    } catch (...) {
    }

    const Date dates[]{Date{1, 1, 2000}, Date(2, 29, 2024), Date(12, 31, 2024)};

    for (auto date : dates) {
        date.nextDay();
        std::cout << std::format("{}/{}/{}\n", date.getMonth(), date.getDay(), date.getYear());
    }
}
