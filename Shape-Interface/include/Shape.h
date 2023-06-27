#ifndef SHAPE_H
#define SHAPE_H

#include <string>

struct BoundingBoxDimensions {
    double width;
    double height;
};

class Shape {
public:
    virtual double square() const = 0;
    virtual BoundingBoxDimensions dimensions() const = 0;
    virtual std::string type() const = 0;
};

#endif // SHAPE_H