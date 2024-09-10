//
// Created by Peter Sims on 9/9/24.
//

#include <iostream>

#include "exercise_classes/date_and_time.h"

int main() {
    // std::vector<DateAndTime>{};

    try {
        DateAndTime badDate{13, 13, 13};
    } catch (...) {
        std::cout << "Bad month caught\n";
    }
    try {
        DateAndTime badDate2{5, -1, 13};
    } catch (...) {
        std::cout << "Bad day caught\n";
    }

    try {
        DateAndTime badTime(3, 3, 2000, -3, 0, 0);
    } catch (...) {
        std::cout << "Bad hour caught\n";
    }
    try {
        DateAndTime badTime2(3, 3, 2000, 3, 80, 0);
    } catch (...) {
        std::cout << "Bad minute caught\n";
    }

    try {
        DateAndTime badTime2(3, 3, 2000, 3, 15, 80);
    } catch (...) {
        std::cout << "Bad second caught\n";
    }

    DateAndTime dateAndTime1{};
    DateAndTime dateAndTime2{3, 1, 1950, 5, 23, 59};
    std::cout << dateAndTime1.toStandardString() << "\n";
    std::cout << dateAndTime2.toStandardString() << "\n";
    dateAndTime2.tick();
    std::cout << dateAndTime2.toStandardString() << "\n";

    DateAndTime dateAndTime3{3, 31, 1950, 23, 59, 59};
    std::cout << dateAndTime3.toUniversalString() << "\n";
    dateAndTime3.tick();
    std::cout << dateAndTime3.toUniversalString() << "\n";
}
