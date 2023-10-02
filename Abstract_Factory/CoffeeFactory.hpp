#ifndef ABSTRACT_FACTORY_COFFEE_FACTORY_HPP
#define ABSTRACT_FACTORY_COFFEE_FACTORY_HPP

#include "AbstractDrinkFactory.hpp"

class CoffeeFactory : public AbstractDrinkFactory {
public:
    virtual DrinkPtr make() override;
};

#endif // ABSTRACT_FACTORY_COFFEE_FACTORY_HPP