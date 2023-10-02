#ifndef ABSTRACT_FACTORY_ABSTRACT_DRINK_FACTORY_HPP
#define ABSTRACT_FACTORY_ABSTRACT_DRINK_FACTORY_HPP

#include "Drink.hpp"

#include <memory> // std::unique_ptr

using DrinkPtr = std::unique_ptr<Drink>;

class AbstractDrinkFactory {
public:
    virtual DrinkPtr make() =0;
};

#endif // ABSTRACT_FACTORY_ABSTRACT_DRINK_FACTORY_HPP