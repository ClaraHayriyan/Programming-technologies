#ifndef ABSTRACT_FACTORY_TEA_FACTORY_HPP
#define ABSTRACT_FACTORY_TEA_FACTORY_HPP

#include "AbstractDrinkFactory.hpp"

class TeaFactory : public  AbstractDrinkFactory {
public:
    virtual DrinkPtr make() override;
};

#endif // ABSTRACT_FACTORY_TEA_FACTORY_HPP