//
// Created by Peter Sims on 9/23/24.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <ostream>
#include <string>


class Complex {
public:
    explicit Complex(double realPart = 0.0, double imaginaryPart = 0.0);
    Complex operator+(const Complex& right) const;
    Complex operator-(const Complex& right) const;
    Complex operator*(const Complex& right) const;
    std::string toString() const;


    friend std::ostream& operator>>(std::istream& os, const Complex& obj);
    friend std::ostream& operator<<(std::ostream& os, const Complex& obj);

private:
    double m_real{};
    double m_imaginary{};
};


#endif //COMPLEX_H
