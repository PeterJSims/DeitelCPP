//
// Created by Peter Sims on 10/29/24.
//

#include <iostream>
#include <print>
#include <tuple>

int main() {
    std::tuple susan{"Susan", 92, 85, 100};
    std::tuple eduardo{"Eduardo", 83, 95, 79};
    std::tuple azizi{"Azizi", 91, 89, 82};
    std::tuple pantipa{"Pantipa", 97, 91, 92};
    std::vector tuples{susan, eduardo, azizi, pantipa};

    double averageTotal{0.0};

    for (auto tuple : tuples) {
        auto [name, grade1,grade2,grade3]{tuple};
        double avg{(grade1 + grade2 + grade3) / 3.0};
        averageTotal += avg;
        std::println("Average for {} is {:.2f}", name, avg);
    }

    averageTotal /= 4;
    std::println("Class's average is: {:.2f}", averageTotal);

    return 0;
}
