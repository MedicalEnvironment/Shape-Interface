#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double sideA, double sideB, double sideC) : sideA(sideA), sideB(sideB), sideC(sideC) {}

double Triangle::square() const {
    double p = (sideA + sideB + sideC) / 2.0;
    return std::sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
}

BoundingBoxDimensions Triangle::dimensions() const {
    double p = (sideA + sideB + sideC) / 2.0;
    double radius = (sideA * sideB * sideC) / (4.0 * std::sqrt(p * (p - sideA) * (p - sideB) * (p - sideC)));
    double side = 2.0 * radius;
    return {side, side};
}

std::string Triangle::type() const {
    return "Triangle";
}