//
// Created by Peter Sims on 9/8/24.
//

#ifndef POINT_H
#define POINT_H
#include <string>


class Point {
public:
    Point(int x, int y);
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    void move(int x, int y);
    std::string toString();

private:
    int m_x{};
    int m_y{};
};


#endif //POINT_H
