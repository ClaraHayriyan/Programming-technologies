#ifndef FACTORY_SEA_LOGISTICS_HPP
#define FACTORY_SEA_LOGISTICS_HPP

#include "Logistics.hpp"

class SeaLogistics : public Logistics {
public:
    virtual TransportPtr createTransport() override;
};

#endif // FACTORY_SEA_LOGISTICS_HPP