#ifndef DECORATOR_SHAPE_DECORATOR_HPP
#define DECORATOR_SHAPE_DECORATOR_HPP

#include "Shape.hpp"

#include <memory>

class ShapeDecorator : public Shape {
public:
    ShapeDecorator(std::shared_ptr<Shape>);
    virtual void draw() override;
protected:
    std::shared_ptr<Shape> shape_;
};

#endif // DECORATOR_SHAPE_DECORATOR_HPP