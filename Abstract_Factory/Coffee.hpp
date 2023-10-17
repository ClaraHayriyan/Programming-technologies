#ifndef ABSTRACT_FACTORY_COFFEE_HPP
#define ABSTRACT_FACTORY_COFFEE_HPP

#include "Drink.hpp"

class Coffee : public Drink {
public:
    virtual void prepareHot() override;
    virtual void prepareCold() override;
};

#endif // ABSTRACT_FACTORY_COFFEE_HPP