#include "ShapeDecorator.hpp"

ShapeDecorator::ShapeDecorator(std::shared_ptr<Shape> shape)
: shape_(shape)
{
}

void ShapeDecorator::draw() {
    shape_->draw();
}