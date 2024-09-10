//
// Created by Peter Sims on 9/8/24.
//

#include "point.h"

#include <format>


Point::Point(const int x, const int y): m_x(x), m_y(y) {
}

int Point::getX() const {
    return m_x;
}

void Point::setX(const int x) {
    m_x = x;
}

int Point::getY() const {
    return m_y;
}

void Point::setY(const int y) {
    m_y = y;
}


void Point::move(const int x, const int y) {
    m_x = x;
    m_y = y;
}

std::string Point::toString() {
    return std::format("({}, {})", m_x, m_y);
}
