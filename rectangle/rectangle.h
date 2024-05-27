#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../shapes.h"

class Rectangle : public Shapes {
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }

private:
    double width, height;
};

#endif // RECTANGLE_H
