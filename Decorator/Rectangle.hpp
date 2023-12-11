#ifndef DECORATOR_RECTANGLE_HPP
#define DECORATOR_RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
public:
    virtual void draw() override;
};

#endif // DECORATOR_RECTANGLE_HPP