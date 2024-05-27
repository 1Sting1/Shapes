#ifndef SHAPES_H
#define SHAPES_H

class Shapes {
public:
    virtual ~Shapes() = default;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

#endif // SHAPES_H
