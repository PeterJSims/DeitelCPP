#include <format>
#include <iostream>
#include "exercise_classes/employee.h"
int main() {
  Employee emp{"bob", "bobson", 5500};
  Employee emp2{"rob", "robson", 6500};
  std::cout << emp.getMonthlySalary() * 12 << std::endl;
  std::cout << emp2.getMonthlySalary() * 12 << std::endl;
  emp.setMonthlySalary(emp.getMonthlySalary() * 1.10);
  emp2.setMonthlySalary(emp2.getMonthlySalary() * 1.10);
  std::cout << emp.getMonthlySalary() * 12 << std::endl;
  std::cout << emp2.getMonthlySalary() * 12 << std::endl;


  return 0;
}