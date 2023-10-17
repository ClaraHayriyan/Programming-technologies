#include "CoffeeFactory.hpp"
#include "Coffee.hpp"

DrinkPtr CoffeeFactory::make() {
    return std::make_unique<Coffee>();
}