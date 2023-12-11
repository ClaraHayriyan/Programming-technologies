#include "BorderedShape.hpp"

#include <iostream>

BorderedShape::BorderedShape(std::shared_ptr<Shape> shape, int width)
: ShapeDecorator(shape)
, width_(width)
{
}

void BorderedShape::draw() {
    ShapeDecorator::draw();
    std::cout << "adding border of width " << width_ << "\n";
}