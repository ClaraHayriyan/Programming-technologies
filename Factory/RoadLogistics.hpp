#ifndef FACTORY_ROAD_LOGISTICS_HPP
#define FACTORY_ROAD_LOGISTICS_HPP

#include "Logistics.hpp"

class RoadLogistics : public Logistics {
public:
    virtual TransportPtr createTransport() override;
};

#endif // FACTORY_ROAD_LOGISTICS_HPP