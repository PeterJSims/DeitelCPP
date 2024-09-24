//
// Created by Peter Sims on 9/23/24.
//

#include "complex.h"

#include <format>

Complex::Complex(const double realPart, const double imaginaryPart): m_real(realPart), m_imaginary(imaginaryPart) {
}

Complex Complex::operator+(const Complex& right) const {
    return Complex{m_real + right.m_real, m_imaginary + right.m_imaginary};
}

Complex Complex::operator-(const Complex& right) const {
    return Complex{m_real - right.m_real, m_imaginary - right.m_imaginary};
}

Complex Complex::operator*(const Complex& right) const {
    return Complex{m_real * right.m_real, m_imaginary * right.m_imaginary};

}

std::string Complex::toString() const {
    char sign{m_imaginary < 0 ? '-' : '+'};
    return std::format("{} {} {}𝑖", m_real, sign, abs(m_imaginary));
}

std::ostream& operator<<(std::ostream& os, const Complex& obj) {
    os << obj.toString();
    return os;
}
