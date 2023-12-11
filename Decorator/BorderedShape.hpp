#ifndef DECORATOR_BORDERED_SHAPE_HPP
#define DECORATOR_BORDERED_SHAPE_HPP

#include "ShapeDecorator.hpp"

class BorderedShape : public ShapeDecorator {
public:
    BorderedShape(std::shared_ptr<Shape>, int width);
    virtual void draw() override;

protected:
    int width_;
};

#endif // DECORATOR_BORDERED_SHAPE_HPP