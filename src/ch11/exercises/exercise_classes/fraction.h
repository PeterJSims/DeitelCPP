//
// Created by Peter Sims on 9/23/24.
//

#ifndef FRACTION_H
#define FRACTION_H
#include <string>


class Fraction {
public:
    explicit Fraction(int numerator = 1, int denominator = 1);

    std::string toString();
    double toDouble() const;
    Fraction operator+(const Fraction& other);
    Fraction operator-(const Fraction& other);
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    friend bool operator==(const Fraction& lhs, const Fraction& rhs);

    friend bool operator<(const Fraction& lhs, const Fraction& rhs);

    friend bool operator<=(const Fraction& lhs, const Fraction& rhs);

    friend bool operator>(const Fraction& lhs, const Fraction& rhs);

    friend bool operator>=(const Fraction& lhs, const Fraction& rhs);

private:
    int m_numerator;
    int m_denominator;

    int gcd(int a, int b);
    int lcm(int a, int b);
    void reduce();
};


#endif //FRACTION_H
