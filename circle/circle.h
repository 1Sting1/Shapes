#ifndef CIRCLE_H
#define CIRCLE_H

#include "../shapes.h"
#include <cmath>

class Circle : public Shapes {
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }

private:
    double radius;
};

#endif // CIRCLE_H
