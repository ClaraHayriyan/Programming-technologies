#ifndef DECORATOR_COLORED_SHAPE_HPP
#define DECORATOR_COLORED_SHAPE_HPP

#include "ShapeDecorator.hpp"

#include <string>

class ColoredShape : public ShapeDecorator {
public:
    ColoredShape(std::shared_ptr<Shape>, const std::string& color);
    virtual void draw() override;
    
protected:
    std::string color_;
};

#endif // DECORATOR_COLORED_SHAPE_HPP