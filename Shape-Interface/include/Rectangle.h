#include "Circle.h"
#include <cmath>

Circle::Circle(double radius) : radius(radius) {}

double Circle::square() const {
    return 3.14159 * radius * radius;
}

BoundingBoxDimensions Circle::dimensions() const {
    return {2.0 * radius, 2.0 * radius};
}

std::string Circle::type() const {
    return "Circle";
}