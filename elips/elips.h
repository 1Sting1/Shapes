#ifndef ELIPS_H
#define ELIPS_H

#include "../shapes.h"
#include <cmath>

class Elips : public Shapes {
public:
    Elips(double a, double b) : semiMajorAxis(a), semiMinorAxis(b) {}

    double area() const override {
        return M_PI * semiMajorAxis * semiMinorAxis;
    }

    double perimeter() const override {
        // Approximation of ellipse perimeter
        return M_PI * (3*(semiMajorAxis + semiMinorAxis) - std::sqrt((3*semiMajorAxis + semiMinorAxis) * (semiMajorAxis + 3*semiMinorAxis)));
    }

private:
    double semiMajorAxis, semiMinorAxis;
};

#endif // ELIPS_H
