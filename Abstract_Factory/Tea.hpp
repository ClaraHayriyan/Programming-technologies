#ifndef ABSTRACT_FACTORY_TEA_HPP
#define ABSTRACT_FACTORY_TEA_HPP

#include "Drink.hpp"

class Tea : public Drink {
public:
    virtual void prepareHot() override;
    virtual void prepareCold() override;
};

#endif // ABSTRACT_FACTORY_TEA_HPP