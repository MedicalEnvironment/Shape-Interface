#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

double Rectangle::square() const {
    return length * width;
}

BoundingBoxDimensions Rectangle::dimensions() const {
    return {length, width};
}

std::string Rectangle::type() const {
    return "Rectangle";
}