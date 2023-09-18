#ifndef FACTORY_SHIP_HPP
#define FACTORY_SHIP_HPP

#include "Transport.hpp"

class Ship : public Transport {
public:
    virtual void deliver() override;
};

#endif // FACTORY_SHIP_HPP