//
// Created by Peter Sims on 9/6/24.
//


// see Time class files for adjustments
#include <print>
#include <format>
#include "exercise_classes/Time.h"

int main() {
    const Time time{3, 20, 44};
    std::println("{}", time.to12HourString());
    std::println("{}", time.to24HourString());

}
