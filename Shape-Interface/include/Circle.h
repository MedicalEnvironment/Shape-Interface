#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius);

    double square() const override;
    BoundingBoxDimensions dimensions() const override;
    std::string type() const override;
};

#endif // CIRCLE_H