// Fig. 10.16: CommissionEmployee.cpp
// CommissionEmployee class member-function definitions.
#include <format>
#include <stdexcept>
#include "CommissionEmployee.h" // CommissionEmployee class definition

// constructor                                                        
CommissionEmployee::CommissionEmployee(std::string_view name, const Date& birthday,
                                       double grossSales, double commissionRate) : Employee{name, birthday} {
    setGrossSales(grossSales);
    setCommissionRate(commissionRate);
}

// set gross sales amount
void CommissionEmployee::setGrossSales(double grossSales) {
    if (grossSales < 0.0) {
        throw std::invalid_argument("Gross sales must be >= 0.0");
    }

    m_grossSales = grossSales;
}

// return gross sales amount
double CommissionEmployee::getGrossSales() const { return m_grossSales; }

// set commission rate
void CommissionEmployee::setCommissionRate(double commissionRate) {
    if (commissionRate <= 0.0 || commissionRate >= 1.0) {
        throw std::invalid_argument(
            "Commission rate must be > 0.0 and < 1.0");
    }

    m_commissionRate = commissionRate;
}

// return commission rate
double CommissionEmployee::getCommissionRate() const {
    return m_commissionRate;
}

// calculate earnings                        
double CommissionEmployee::earnings() const {
    return getGrossSales() * getCommissionRate();
}

// return string representation of CommissionEmployee object        
std::string CommissionEmployee::toString() const {
    return std::format("{}\n{}: ${:.2f}\n{}: {:.2f}", Employee::toString(),
                       "gross sales", getGrossSales(),
                       "commission rate", getCommissionRate());
}
