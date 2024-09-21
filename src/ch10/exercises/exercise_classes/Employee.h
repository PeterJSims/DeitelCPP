// Fig. 10.11: Employee.h
// Employee abstract base class.
#pragma once // prevent multiple inclusions of header
#include <string> 
#include <string_view>
#include "Date.h"

class Employee {
public:
   explicit Employee(std::string_view name, const Date& birthday);
   virtual ~Employee() = default; // compiler generates virtual destructor

   void setName(std::string_view name);
   std::string getName() const;
   Date getBirthday() const;

   // pure virtual function makes Employee an abstract base class
   virtual double earnings() const = 0; // pure virtual
   virtual std::string toString() const; // virtual
private:
   std::string m_name;
   Date m_birthday;
};

