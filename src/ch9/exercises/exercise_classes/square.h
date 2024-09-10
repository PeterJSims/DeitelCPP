//
// Created by Peter Sims on 9/4/24.
//

#ifndef SQUARE_H
#define SQUARE_H


class Square {
public:
    explicit Square(double side);

    double perimeter() const;
    double area() const;
    double diagonal() const;

private:
    double m_side{};
};


#endif //SQUARE_H
