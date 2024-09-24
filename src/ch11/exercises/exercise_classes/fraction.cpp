//
// Created by Peter Sims on 9/23/24.
//

#include "fraction.h"
#include <format>

Fraction::Fraction(const int numerator, const int denominator)
    : m_numerator(numerator),
      m_denominator(denominator) {
    if (m_denominator == 0) {
        throw std::invalid_argument("Cannot have a denominator of 0");
    }
    if (m_numerator > 0 && m_denominator < 0) {
        m_numerator *= -1;
        m_denominator *= -1;
    }
    reduce();
}

Fraction Fraction::operator+(const Fraction& other) {
    const int lowestCommonMultiple{lcm(m_denominator, other.m_denominator)};
    const int leftNumerator{m_numerator * (lowestCommonMultiple / m_denominator)};
    const int rightNumerator{other.m_numerator * (lowestCommonMultiple / other.m_denominator)};

    return Fraction{leftNumerator + rightNumerator, lowestCommonMultiple};
}

Fraction Fraction::operator-(const Fraction& other) {
    const int lowestCommonMultiple{lcm(m_denominator, other.m_denominator)};
    const int leftNumerator{m_numerator * (lowestCommonMultiple / m_denominator)};
    const int rightNumerator{other.m_numerator * (lowestCommonMultiple / other.m_denominator)};

    return Fraction{leftNumerator - rightNumerator, lowestCommonMultiple};
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction{m_numerator * other.m_numerator, m_denominator * other.m_denominator};
}

Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction{m_numerator * other.m_denominator, m_denominator * other.m_numerator};
}

bool operator==(const Fraction& lhs, const Fraction& rhs) {
    return lhs.m_numerator == rhs.m_numerator && lhs.m_denominator == rhs.m_denominator;
}

bool operator<(const Fraction& lhs, const Fraction& rhs) {
    return lhs.toDouble() < rhs.toDouble();
}

bool operator<=(const Fraction& lhs, const Fraction& rhs) {
    return !(rhs < lhs);
}

bool operator>(const Fraction& lhs, const Fraction& rhs) {
    return rhs < lhs;
}

bool operator>=(const Fraction& lhs, const Fraction& rhs) {
    return !(lhs < rhs);
}

std::string Fraction::toString() {
    return std::format("{}/{}", m_numerator, m_denominator);
}

double Fraction::toDouble() const {
    return (m_numerator * 1.0) / m_denominator;
}

int Fraction::gcd(const int a, const int b) {
    if (a == 0) {
        return b;
    }
    return Fraction::gcd(b % a, a);
}

int Fraction::lcm(const int a, const int b) {
    return (a / gcd(a, b)) * b;
}

void Fraction::reduce() {
    const int x{gcd(m_numerator, m_denominator)};
    m_numerator /= x;
    m_denominator /= x;
}
