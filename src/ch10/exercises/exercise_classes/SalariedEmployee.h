// Fig. 10.13: SalariedEmployee.h
// SalariedEmployee class derived from Employee.
#pragma once
#include <string> // C++ standard string class
#include <string_view> 
#include "Employee.h" // Employee class definition

class SalariedEmployee final : public Employee {
public:
   SalariedEmployee(std::string_view name, const Date& birthday, double salary);
   virtual ~SalariedEmployee() = default; // virtual destructor

   void setSalary(double salary);
   double getSalary() const;

   // keyword override signals intent to override               
   double earnings() const override; // calculate earnings        
   std::string toString() const override; // string representation
private:
   double m_salary{0.0};
};

