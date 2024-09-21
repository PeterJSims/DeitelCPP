//
// Created by Peter Sims on 9/21/24.
//
#include <iostream>
#include <format>

class Quadrilateral {
public:
    virtual ~Quadrilateral() = default;

    static int get_sides() {
        return m_sides;
    }

    virtual void sayName() = 0;

private:
    static constexpr int m_sides{4};
};

class Trapezoid : public Quadrilateral {
public:
    void sayName() override { std::cout << "Trapezoid\n"; }
};

class Parallelogram : public Quadrilateral {
public:
    void sayName() override { std::cout << "Parallelogram\n"; }
};

class Rectangle : public Quadrilateral {
public:
    void sayName() override { std::cout << "Rectangle\n"; }
};

class Square : public Quadrilateral {
public:
    void sayName() override { std::cout << "Square\n"; }
};

int main() {
    auto s{Square{}};
    std::cout << s.get_sides() << std::endl;
    s.sayName();
    auto shape{Rectangle{}};
    shape.sayName();
}
