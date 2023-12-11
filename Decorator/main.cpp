#include "Circle.hpp"
#include "Rectangle.hpp"
#include "ColoredShape.hpp"
#include "BorderedShape.hpp"

int main() {
    std::shared_ptr<Shape> circle = std::make_shared<Circle>();
    std::shared_ptr<Shape> rectangle = std::make_shared<Rectangle>();

    std::shared_ptr<Shape> coloredCircle = std::make_shared<ColoredShape>(circle, "red");
    std::shared_ptr<Shape> borderedRectangle = std::make_shared<BorderedShape>(rectangle, 4);

    coloredCircle->draw();
    borderedRectangle->draw();

    std::shared_ptr<Shape> coloredAndBorderedCircle = std::make_shared<BorderedShape>(coloredCircle, 6);
    coloredAndBorderedCircle->draw();
}