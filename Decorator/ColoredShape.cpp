#include "ColoredShape.hpp"

#include <iostream>

ColoredShape::ColoredShape(std::shared_ptr<Shape> shape, const std::string& color)
: ShapeDecorator(shape)
, color_(color)
{
}

void ColoredShape::draw() {
    ShapeDecorator::draw();
    std::cout << "adding " << color_ << " color\n";
}