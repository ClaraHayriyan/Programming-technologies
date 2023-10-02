#ifndef ABSTRACT_FACTORY_DRINK_HPP
#define ABSTRACT_FACTORY_DRINK_HPP

class Drink {
public:
    virtual void prepareHot() =0;
    virtual void prepareCold() =0;
};

#endif // ABSTRACT_FACTORY_DRINK_HPP