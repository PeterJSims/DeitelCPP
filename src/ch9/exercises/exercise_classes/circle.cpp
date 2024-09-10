//
// Created by Peter Sims on 9/8/24.
//

#include "circle.h"

#include <format>

Circle::Circle(const Point center,const double radius): m_center(center), m_radius(radius) {
}

std::string Circle::toString() {
    return std::format("Circle: ({}, {}) | Radius: {}", m_center.getX(), m_center.getY(), m_radius);

}

void Circle::move(int x, int y) {
    m_center.move(x, y);
}
