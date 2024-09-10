//
// Created by Peter Sims on 9/8/24.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"


class Circle {
public:
    Circle(Point center, double radius);

    std::string toString();
    void move(int x, int y);


private:
    Point m_center;
    double m_radius{};
};


#endif //CIRCLE_H
