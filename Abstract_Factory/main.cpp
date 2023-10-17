#include "DrinkFactory.hpp"

int main() {
    DrinkFactory factory;
    auto hotTea = factory.makeHot("tea");
    auto coldTea = factory.makeCold("tea");
    auto hotCoffee = factory.makeHot("coffee");
    auto coldCoffee = factory.makeCold("coffee");
}