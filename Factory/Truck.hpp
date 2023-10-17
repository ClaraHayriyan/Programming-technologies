#ifndef FACTORY_TRUCK_HPP
#define FACTORY_TRUCK_HPP

#include "Transport.hpp"

class Truck : public Transport {
public:
    virtual void deliver() override;
};

#endif // FACTORY_TRUCK_HPP