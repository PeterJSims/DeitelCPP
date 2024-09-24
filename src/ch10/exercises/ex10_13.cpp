//
// Created by Peter Sims on 9/21/24.
//

#include <iostream>
#include <format>
#include "exercise_classes/Date.h"
#include "exercise_classes/Employee.h"
#include "exercise_classes/SalariedEmployee.h"
#include "exercise_classes/CommissionEmployee.h"

int main() {
    // see linked classes for additions
    std::vector<Employee*> employees{};

    employees.push_back(new SalariedEmployee{"John Doe", Date{2000, 1, 12}, 50000});
    employees.push_back(new SalariedEmployee{"Jane Doe", Date{2000, 2, 1}, 60000});
    employees.push_back(new CommissionEmployee{"Bill Doe", Date{2000, 3, 1}, 600000, .08});


    for (int i{1}; i <= 12; ++i) {
        std::cout << std::format("Month: {:02}\n", i);
        for (const auto employee : employees) {
            auto pay{employee->earnings() / 12};
            if (i == employee->getBirthday().getMonth()) {
                pay += 100;
            }
            std::cout << std::format("Employee: {} | Month's Pay: {:.2f}\n", employee->getName(), pay);
        }
    }


    for (auto employee : employees) {
        delete employee;
    }
    employees.clear();
    return 0;
}
