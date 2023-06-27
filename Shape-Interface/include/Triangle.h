#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double sideA, double sideB, double sideC);

    double square() const override;
    BoundingBoxDimensions dimensions() const override;
    std::string type() const override;
};

#endif // TRIANGLE_H