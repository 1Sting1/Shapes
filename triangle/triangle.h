#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../shapes.h"
#include <cmath>

class Triangle : public Shapes {
public:
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    double area() const override {
        double s = (sideA + sideB + sideC) / 2;
        return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }

    double perimeter() const override {
        return sideA + sideB + sideC;
    }

private:
    double sideA, sideB, sideC;
};

#endif // TRIANGLE_H
