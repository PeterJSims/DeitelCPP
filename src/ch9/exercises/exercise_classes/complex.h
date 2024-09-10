//
// Created by Peter Sims on 9/8/24.
//

#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <format>
#include <ostream>

class Complex {
public:
    Complex(const double real_part,const double imaginary_part)
        : m_realPart(real_part),
          m_imaginaryPart(imaginary_part) {
    }

    void add(const Complex& other) {
        this->m_realPart = m_realPart + other.m_realPart;
        this->m_imaginaryPart = m_imaginaryPart + other.m_imaginaryPart;
    }

    Complex add(const Complex& other) const {
        return Complex{this->m_realPart + other.m_realPart, this->m_imaginaryPart + other.m_imaginaryPart};
    }

    void subtract(const Complex& other) {
        this->m_realPart = other.m_realPart - this->m_realPart;
        this->m_imaginaryPart = other.m_imaginaryPart - this->m_imaginaryPart;
    }

    Complex subtract(const Complex& other) const {
        return Complex{other.m_realPart - this->m_realPart, other.m_imaginaryPart - this->m_imaginaryPart};
    }

    std::string toString() {
        std::string returnString{std::format("({}, {})", this->m_realPart, this->m_imaginaryPart)};
        return returnString;
    }

    friend std::ostream& operator<<(std::ostream& os, const Complex& obj) {
        const bool isPositive{obj.m_imaginaryPart > 0};
        const double temp = abs(obj.m_imaginaryPart);

        return os << obj.m_realPart << " " << (isPositive ? "+" : "-") << " " << temp << "i";
    }

private:
    double m_realPart{};
    double m_imaginaryPart{};
};


#endif //COMPLEX_H
