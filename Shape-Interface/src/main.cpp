#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

void printParams(Shape* shape) {
    std::cout << "Type: " << shape->type() << std::endl;
    std::cout << "Square: " << shape->square() << std::endl;

    BoundingBoxDimensions dimensions = shape->dimensions();
    std::cout << "Width: " << dimensions.width << std::endl;
    std::cout << "Height: " << dimensions.height << std::endl;
}

int main() {
    Triangle t(3, 4, 5);
    printParams(&t);

    return 0;
}