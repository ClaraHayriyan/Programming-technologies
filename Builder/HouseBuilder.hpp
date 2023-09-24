#ifndef BUILDER_HOUSE_BUILDER
#define BUILDER_HOUSE_BUILDER

#include <memory> // std::uniqe_ptr

#include "House.hpp"

using HousePtr = std::unique_ptr<House>;

class HouseBuilder {
public:
    HouseBuilder();
    virtual HouseBuilder& buildWalls() =0;
    virtual HouseBuilder& buildDoors() =0;
    virtual HouseBuilder& buildRoof() =0;
    HousePtr build();

protected:
    HousePtr house_;
};

#endif // BUILDER_HOUSE_BUILDER