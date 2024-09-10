//
// Created by Peter Sims on 9/4/24.
//

#include <cmath>
#include "square.h"


Square::Square(const double side): m_side(side) {
}

double Square::area() const {
    return m_side * m_side;
}

double Square::diagonal() const {
    return sqrt(m_side * m_side + m_side * m_side);
}

double Square::perimeter() const {
    return 4 * m_side;
}
