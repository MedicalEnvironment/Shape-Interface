#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double length, double width);
    double square() const override;
    BoundingBoxDimensions dimensions() const override;
    std::string type() const override;

private:
    double length;
    double width;
};

#endif // RECTANGLE_H
