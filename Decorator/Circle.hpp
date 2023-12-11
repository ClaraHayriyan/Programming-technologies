#ifndef DECORATOR_CIRCLE_HPP
#define DECORATOR_CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
public:
    virtual void draw() override;
};

#endif // DECORATOR_CIRCLE_HPP