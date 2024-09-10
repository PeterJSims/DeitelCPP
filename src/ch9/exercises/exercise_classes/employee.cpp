//
// Created by Peter Sims on 9/5/24.
//

#include "employee.h"
#include <iostream>

Employee::Employee(std::string firstName, std::string lastName, int monthlySalary): m_firstName(std::move(firstName)),
    m_lastName(std::move(lastName)), m_monthlySalary(monthlySalary) {
    setMonthlySalary(monthlySalary);
}

std::string Employee::getFirstName() const {
    return m_firstName;
}

void Employee::setFirstName(const std::string& firstName) {
    m_firstName = firstName;
}

std::string Employee::getLastName() const {
    return m_lastName;
}

void Employee::setLastName(const std::string& lastName) {
    m_lastName = lastName;
}

int Employee::getMonthlySalary() const {
    return m_monthlySalary;
}

void Employee::setMonthlySalary(const int salary) {
    if (salary < 0) {
        this->m_monthlySalary = 0;
    } else {
        this->m_monthlySalary = salary;
    }
}
