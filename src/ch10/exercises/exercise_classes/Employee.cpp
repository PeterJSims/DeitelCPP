// Fig. 10.12: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <format>
#include "Employee.h" // Employee class definition

// constructor                                                        
Employee::Employee(const std::string_view name, const Date& birthday) : m_name{name}, m_birthday(birthday) {
} // empty body

// set name
void Employee::setName(std::string_view name) { m_name = name; }

// get name
std::string Employee::getName() const { return m_name; }

// return string representation of an Employee
std::string Employee::toString() const {
    return std::format("name: {}", getName());
}

Date Employee::getBirthday() const {
    return m_birthday;
}
