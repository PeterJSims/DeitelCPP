//
// Created by Peter Sims on 9/5/24.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>


class Employee {
public:
    Employee(std::string firstName, std::string lastName, int monthlySalary);

    std::string getFirstName() const;
    void setFirstName(const std::string& firstName);
    std::string getLastName() const;
    void setLastName(const std::string& lastName);
    int getMonthlySalary() const;
    void setMonthlySalary(int salary);

private:
    std::string m_firstName;
    std::string m_lastName;
    int m_monthlySalary{};
};


#endif //EMPLOYEE_H
