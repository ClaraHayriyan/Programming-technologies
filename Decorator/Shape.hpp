#ifndef DECORATOR_SHAPE_HPP
#define DECORATOR_SHAPE_HPP

class Shape {
public:
    virtual void draw() =0;
    virtual ~Shape() =default;
};

#endif // DECORATOR_SHAPE_HPP